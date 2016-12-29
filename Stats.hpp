#pragma once
#include <iostream>
using namespace std;

namespace Skaere {

struct Stats{
	Stats() : 
      mNumWrappedSections(0)
    , mNumWrappedSectionsEnd(0)
    , mNumInstrumentedSections(0)
    , mNumSectionEvents(0)
    , mNumSections(0)
    , mNumTicks(0)
    , mNumTocks(0)
    , mInstCount(0)
    , mNumMpiCalls(0)
    , mChangeInst00(0)
    , mChangeInst01(0)
    , mChangeInst10(0)
    , mChangeInst11(0)
    , mChangeAtNode(0)
    , mChangeAtParent(0)
    , mChangeAtChild(0)
	{};
	
	int		mNumWrappedSections;
  int   mNumWrappedSectionsEnd;
  int   mNumInstrumentedSections;
  int   mNumSectionEvents;
  int   mNumSections;
  int   mNumTicks;
  int   mNumTocks;
  int   mInstCount;
  int   mNumMpiCalls;
  int   mChangeInst00;
  int   mChangeInst01;
  int   mChangeInst10;
  int   mChangeInst11;
  
  int   mChangeAtNode;
  int   mChangeAtParent;
  int   mChangeAtChild;
  
  
  friend std::ostream& operator<<(std::ostream& stream, 
                     const Stats& s) {
    float changesTotal   = s.mChangeInst00 + s.mChangeInst01 + s.mChangeInst10 + s.mChangeInst11;
    float changesAtTotal = s.mChangeAtNode + s.mChangeAtParent + s.mChangeAtChild;
    stream << "--------------------------------------------------------------------------\n";
    stream << "Skaere stats:\n";
    stream << "Wrapped Sect: " << s.mNumWrappedSections       <<"\n";
    if(s.mNumWrappedSectionsEnd != s.mNumWrappedSections )
      stream << "-> Wrapped closed Sect is different: " << s.mNumWrappedSectionsEnd <<"\n";
    stream << "Instrmt Sect: " << s.mNumInstrumentedSections  <<"\n";
    stream << "Ticks       : " << s.mNumTicks                 <<"\n";
    stream << "Tocks       : " << s.mNumTocks                 <<"\n";
    stream << "Sections    : " << s.mNumSections              <<"\n";
    stream << "Events  Sect: " << s.mNumSectionEvents         <<"\n";
    stream << "CountIn  num: " << s.mInstCount                <<"\n"; 
    if(s.mNumMpiCalls != 0)
    stream << "MpiCalls num: " << s.mNumMpiCalls              <<"\n"; 
    
    stream << "\n"; 
    stream << "Changes totl: " << changesTotal                <<"\n"; 
    stream << " -->  no->no: " << s.mChangeInst00 << " :"<< (float(s.mChangeInst00)*100.0f)/(changesTotal) << "\n";  
    stream << " --> no->yes: " << s.mChangeInst01 << " :"<< (float(s.mChangeInst01)*100.0f)/(changesTotal) << "\n"; 
    stream << " --> yes->no: " << s.mChangeInst10 << " :"<< (float(s.mChangeInst10)*100.0f)/(changesTotal) << "\n"; 
    stream << " -->yes->yes: " << s.mChangeInst11 << " :"<< (float(s.mChangeInst11)*100.0f)/(changesTotal) << "\n"; 
    stream << "Changes totl: " << changesTotal                <<"\n"; 
    stream << " -->    node: " << s.mChangeAtNode   << " :"<< (float(s.mChangeAtNode)  *100.0f)/(changesAtTotal) << "\n";  
    stream << " -->  parent: " << s.mChangeAtParent << " :"<< (float(s.mChangeAtParent)*100.0f)/(changesAtTotal) << "\n"; 
    stream << " -->   child: " << s.mChangeAtChild  << " :"<< (float(s.mChangeAtChild) *100.0f)/(changesAtTotal) << "\n";     
    stream << "\n"; 
    stream << "--------------------------------------------------------------------------\n";
    
    return stream;
  }
  
	};
	
} //end namespace Skaere
