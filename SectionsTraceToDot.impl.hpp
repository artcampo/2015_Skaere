#include "SectionsTraceToDot.hpp"


namespace Skaere{
  template<typename T>
  bool NodeCheckAll(typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold){
    return true;
  }

  template<typename T>
  bool NodeCheckThreshold(typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold){
    return (n->mSection.accumMetricT() > aNumInstThreshold);
  }

  template<typename T>
  bool NodeCheckInstr(typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold){
    return !(n->mSection.isDead);
  }

  template<typename T>
  bool NodeCheckInstrAndThreshold(typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold){
    return (!n->mSection.isDead) and (n->mSection.accumMetricT() > aNumInstThreshold);
  }

  template<typename T>
  bool NodeCheckEmitted(typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold){
    return n->mSection.wasEmitted;
  }  
  
  template<typename T, typename Callable>
  void sectionsTraceToDot(const SectionsTrace<T>& aTrace,
                          const std::string aFileName,
                          const unsigned int aNumInstThreshold,
                          Callable displayNodeCondition
                          //bool (*displayNodeCondition)(
                          //typename SectionsTrace<T>::Node* n,
                          //const unsigned int aNumInstThreshold
                          //)
                          ) {
    std::ofstream*  graphFile;
    graphFile = new std::ofstream();
    graphFile->open(aFileName);
    *graphFile << "digraph{" << "\n";

    //Output graph shape
    aTrace.applyToChildrenAndNode( aTrace.main,
                                   [graphFile, displayNodeCondition, aNumInstThreshold](typename SectionsTrace<T>::Node* n) {

                                     if(n->mChildren.size() > 0 and displayNodeCondition(n, aNumInstThreshold)){
                                       for ( auto& child : n->mChildren ){
                                         if(displayNodeCondition(child,aNumInstThreshold)){
                                           *graphFile  << " " << n->mSection.uniqueId
                                             //<<" : " << n->mSection.averageMetrics()
                                                       << "";
                                           *graphFile  << " -> " << child->mSection.uniqueId
                                             //<<" : " << n->mSection.averageMetrics()
                                                       << "";
                                           *graphFile  << ";\n";
                                         }
                                       }
                                     }
                                     return false;
                                   });

    double max = aTrace.main->mSection.averageMetrics();
    double min = aTrace.main->mSection.averageMetrics();
    aTrace.applyToChildren( aTrace.main,
                            [graphFile, &max, &min, displayNodeCondition, aNumInstThreshold](typename SectionsTrace<T>::Node* n) {
                              if(displayNodeCondition(n, aNumInstThreshold)){
                                if(n->mSection.averageMetrics() > max ) max = n->mSection.averageMetrics();
                                if(n->mSection.averageMetrics() < min ) min = n->mSection.averageMetrics();
                              }
                              return false;
                            });

    //Decide which nodes have color
    aTrace.applyToChildrenAndNode( aTrace.main,
                                   [graphFile, max, min, displayNodeCondition, aNumInstThreshold](typename SectionsTrace<T>::Node* n) {
                                     std::ofstream  streamCopy(NULL);
                                     if(displayNodeCondition(n, aNumInstThreshold)){
                                       *graphFile  << "" << n->mSection.uniqueId
                                                   << "["
                                                   << " label=\"";
                                       //if(n->mSection.instances > 1 or n->mSection.accumMetricT() > aNumInstThreshold)
                                       *graphFile  << n->mSection.id //<< "\\n"
                                                   //<< n->mSection.uniqueId << "\\n"
//                                                    << "Metric: "     << n->mSection.averageMetrics() //<< "\\n"
                                                   //<< "Instrm: "     << n->mSection.is_instrumented  << "\\n"
                                                   //<< "numInst: "    << int(n->mSection.accumMetricT()) << "\\n"
                                                   << " ("  << n->mSection.instances
                                                   << ")\"";
                                       //else
                                      if(!n->mSection.hasMpiCalls)
                                         *graphFile  << ",shape=box";
                                       else 
                                         *graphFile  << ",shape=ellipse";                                                   
                                       //  *graphFile  << "N\\n\"";
                                      //*graphFile  << ",shape=box";
                                                   /*
                                       if(n->mSection.instances == 1 and n->mSection.accumMetricT() > aNumInstThreshold)
                                         *graphFile  << ",shape=box";
                                       else if(n->mSection.accumMetricT() < aNumInstThreshold)
                                         *graphFile  << ",shape=hexagon";
                                       else if(n->mSection.hasExtraeId)
                                         *graphFile  << ",shape=parallelogram";
*/
                                                   
                                       // color of box
                                       streamCopy.copyfmt(*graphFile);
                                       if(n->mSection.is_instrumented){
                                        *graphFile  << ",style = \"filled\""
                                                    << ",fillcolor=\"#00";
                                        *graphFile  << std::hex << std::setw(2) << std::setfill('0')
                                                    << gradient1(max,min,n->mSection.averageMetrics())
                                                    << std::hex << std::setw(2) << std::setfill('0')
                                                    << gradient2(max,min,n->mSection.averageMetrics())
                                                    << "\"";                                       
                                       } else{
                                        *graphFile  << ",style = \"filled\""
                                                    << ",fillcolor=\"#ffffff"
                                                    << "\"";  
                                       }
                                       graphFile->copyfmt(streamCopy);
                                       

                                       if(n->mSection.is_instrumented){
                                         *graphFile<< ",peripheries=2";
                                         *graphFile<< ",color=red";
                                       }

                                       *graphFile  << "];\n";
                                     }
                                     return false;
                                   });


    *graphFile << "}\n";
    graphFile->close();
  }
} //end namespace Skaere
