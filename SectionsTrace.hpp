#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>

//#include "Timing.hpp"
#include "Section.hpp"


namespace Skaere{


std::string simplifyName( char const*const id, const int maxLenght = 80 );

//SectionsTrace::SectionsTrace() : main({main_string,true}){
template<class Metric>
struct SectionsTrace {
public:
  // Node private to SectionsTrace
  struct Node{
    Node( Section<Metric> section )               : mSection(section), mParent(nullptr){};
    Node( Section<Metric> section, Node* parent ) : mSection(section), mParent(parent) {};

    Section<Metric>     mSection;
    Node*               mParent;
    std::vector<Node*>  mChildren;
  };

public:
  SectionsTrace(const int aMainId);

  bool      exists              (char const*const sectionId);
  bool      hasParent() const;
  void      createChild         (Section<Metric> section);
  void      setIteratorToChild  (char const*const sectionId);
  void      setIteratorToParent ();

  Section<Metric> const&  getSection()  const;
  Section<Metric>&  getSection()        ;
  Section<Metric>&  getParentSection()  const;

  Node*     getSectionNode()        const;
  Node*     getParentSectionNode()  const;
  Node*     getMainSectionNode()    const;

  bool      sectionHasInstrumentedCalls() const;
  //  Debug
public:
  void      dump(int aStep, std::ostream& stream)           const;
  void      checkCoherence(int aStep, std::ostream& stream) const;

private:
  Node*   main;
  Node*   current;
  void dump(Node* n, const int tab, std::ostream& stream) const;

public:

  //  Sequences over tree
  template<typename Callable>
  void applyToParentsAndChildren(Node* n, Callable cl){
    recParents  (n, nullptr, cl);
    recChildren (n, cl);
  }

  //  applied until callable returns false
  template<typename Callable>
  void applyToParents(Node* n, Callable cl){
    if(n->mParent != nullptr)
      recParents  (n->mParent, n, cl);
  }

  template<typename Callable>
  void applyToParents(Node* n, Callable cl) const{
    if(n->mParent != nullptr)
      recParents  (n->mParent, n, cl);
  }


  template<typename Callable>
  void applyToChildren(Node* n, Callable cl){
    recChildren  (n, cl);
  }

  template<typename Callable>
  void applyToChildren(Node* n, Callable cl) const{
    recChildren  (n, cl);
  }

  template<typename Callable>
  void applyToDirectChildren(Node* n, Callable cl){
    for ( auto& node : n->mChildren ){
      cl(node);
    }
  }

  template<typename Callable>
  void applyToChildrenAndNode(Node* n, Callable cl) const{
    cl(n);
    recChildren  (n, cl);
  }

  /*
  template<typename Callable>
  void applyToDirectParent(Callable cl){
    auto& node : current->mParent;
    if(node != nullptr)
      cl(node);
    }
  }
  */
private:
  template<typename Callable>
  void recParents(Node* n, Node* child, Callable cl){
    //std::cout << "recparents over: " << n->mSection.id << " with child" << child->mSection.id << std::endl;
    bool stop = cl(n, child);
    //if (n->mParent == nullptr)std::cout << "Parent is nullptr"<< std::endl;
    if (n->mParent != nullptr){
      //if (stop) std::cout << "Stop"<< std::endl;
      if( not stop ){
        //std::cout << "recparents jump: " << n->mParent->mSection.id << std::endl;
        recParents(n->mParent, n, cl);
      }
    }
  }

  template<typename Callable>
  void recParents(Node* n, Node* child, Callable cl) const{
    //std::cout << "recparents over: " << n->mSection.id << " with child" << child->mSection.id << std::endl;
    bool stop = cl(n, child);
    //if (n->mParent == nullptr)std::cout << "Parent is nullptr"<< std::endl;
    if (n->mParent != nullptr){
      //if (stop) std::cout << "Stop"<< std::endl;
      if( not stop ){
        //std::cout << "recparents jump: " << n->mParent->mSection.id << std::endl;
        recParents(n->mParent, n, cl);
      }
    }
  }

  template<typename Callable>
  void recChildren(Node* n, Callable cl){
    for ( auto& node : n->mChildren ){
      bool stop = cl(node);
      if( not stop ) recChildren(node, cl);
    }
  }

  template<typename Callable>
  void recChildren(Node* n, Callable cl) const{
    for ( auto& node : n->mChildren ){
      bool stop = cl(node);
      if( not stop ) recChildren(node, cl);
    }
  }

  void recCheckCoherence(Node* n, int acum, int aStep, std::ostream& stream) const;
    /*
  template<class T>
  friend void sectionsTraceToDot(const SectionsTrace<T>& aTrace,
                                 const std::string aFileName,
                                 const unsigned int aNumInstThreshold,
                                 bool (*check)(SectionsTrace::Node* n, const unsigned int aNumInstThreshold)
                                );
  */
  template<class T, typename Callable>
  friend void sectionsTraceToDot(const SectionsTrace<T>& aTrace,
                                 const std::string aFileName,
                                 const unsigned int aNumInstThreshold,
                                 Callable displayNodeCondition
                                );
};


}// end namespace

//We do NOT want explicit instantiation of SectionsTrace: we do not have the desired especializations at this time and it is not meant to be specialized
#include "SectionsTrace.impl.hpp"
