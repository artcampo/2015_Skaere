#include "SectionsTrace.hpp"
#include <string>
#include <vector>
#include <cstring>
#include <iostream>

namespace Skaere{
extern char const*const main_string;
//*******************************************************************
template<class Metric>
SectionsTrace<Metric>::SectionsTrace(const int aMainId) : 
  main (new Node({main_string,true,aMainId})), current(main){
}

//*******************************************************************
template<class Metric>
bool SectionsTrace<Metric>::exists(char const*const sectionId){  
  for ( auto& n : current->mChildren ){
    if ( strcmp( n->mSection.id, sectionId ) == 0)
      return true;    
  }

  return false;
}

//*******************************************************************
template<class Metric>
void SectionsTrace<Metric>::createChild( Section<Metric> section ){
  Node* newn = new Node(section, current);
  current->mChildren.push_back(newn);
  current = newn;
}

//*******************************************************************
template<class Metric>
void SectionsTrace<Metric>::setIteratorToChild(char const*const sectionId){
  for ( auto& n : current->mChildren )
    if ( strcmp( n->mSection.id, sectionId ) == 0){      
      current = n;
      return;
    }
}

//*******************************************************************
template<class Metric>
void SectionsTrace<Metric>::setIteratorToParent(){
  if( current->mParent != nullptr ){
    current = current->mParent;
  } else {
    std::cout <<"Beyond root"<<std::endl;     
  }  
}

//*******************************************************************
template<class Metric>
Section<Metric> const&  SectionsTrace<Metric>::getSection() const{
  return current->mSection;
}
template<class Metric>
Section<Metric>&  SectionsTrace<Metric>::getSection(){
  return current->mSection;
}

//*******************************************************************
template<class Metric>
Section<Metric>&  SectionsTrace<Metric>::getParentSection() const{
  return current->mParent->mSection;
}

//*******************************************************************
template<class Metric>
bool SectionsTrace<Metric>::hasParent() const{
  return current->mParent != nullptr;
}


//*******************************************************************
template<class Metric>
void SectionsTrace<Metric>::dump(int aStep, std::ostream& stream) const{
  stream << "-----------------------------------------------\n";
  stream << "Dump of SectionsTrace [Step: " << aStep <<"]\n";  
  dump(main, 0, stream);
  stream << "-----------------------------------------------\n";
}

//*******************************************************************
template<class Metric>
void SectionsTrace<Metric>::dump(Node* n, const int tab, std::ostream& stream) const{
  for( int i = 0; i < tab ; ++i ){ 
    if(n != current)
      stream << "-";
    else
      stream << "*";
  }  
  stream << n->mSection;
  
  for ( auto& node : n->mChildren )
    dump(node, tab + 1, stream);
}

//*******************************************************************
template<class Metric>
void SectionsTrace<Metric>::checkCoherence(int aStep, std::ostream& stream) const{
  recCheckCoherence( main, 0, aStep, stream);
}

//*******************************************************************
template<class Metric>
void SectionsTrace<Metric>::recCheckCoherence(Node* n, int acum, int aStep, std::ostream& stream) const{
  acum += n->mSection.isInstrumented();
  if(acum > 1){
    stream << "SKAERE :: tree incoherence: overlapping sections: " << n->mSection.id << std::endl;
    dump(aStep, stream);
    std::cout << "Skaere :: incoherence" << std::endl;  
    exit(1045);
  }
  
  /*
  if(n->mChildren.size() == 0 and acum == 0){
    stream << "SKAERE :: tree incoherence: section not covered: " << n->mSection.id << std::endl;
    dump(aStep);
    exit(1046);
  }  
  */
  
  for ( auto& node : n->mChildren ){
    recCheckCoherence( node, acum, aStep, stream);
  }
}

//*******************************************************************
template<class Metric>
typename SectionsTrace<Metric>::Node* SectionsTrace<Metric>::getSectionNode() const{
  return current;
}

//*******************************************************************
template<class Metric>
typename SectionsTrace<Metric>::Node* SectionsTrace<Metric>::getParentSectionNode() const{
  return current->mParent;
}

//*******************************************************************
template<class Metric>
typename SectionsTrace<Metric>::Node* SectionsTrace<Metric>::getMainSectionNode() const{
  return main;
}

//*******************************************************************
template<class Metric>
bool SectionsTrace<Metric>::sectionHasInstrumentedCalls() const{
  bool hasInstrumentedCalls = current->mSection.isInstrumented();
  applyToChildren( current,
  [&hasInstrumentedCalls](SectionsTrace<Metric>::Node* n) {      
      if(n->mSection.isInstrumented()) hasInstrumentedCalls = true;
      return false;  //apply to all children
  });
  return hasInstrumentedCalls;
}


//*******************************************************************
//end class
}


