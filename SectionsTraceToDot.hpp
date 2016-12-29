#pragma once
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

#include "Section.hpp"
#include "SectionsTrace.hpp"


namespace Skaere{

unsigned int gradient1( const double max, const double min, const double t);
unsigned int  gradient2( const double max, const double min, const double t);

template<typename T, typename Callable>
void sectionsTraceToDot(const SectionsTrace<T>& aTrace,
                        const std::string aFileName,
                        const unsigned int aNumInstThreshold,
                        Callable displayNodeCondition
                        //bool (*displayNodeCondition)(
                                                      //typename SectionsTrace<T>::Node* n,
                                                      //const unsigned int aNumInstThreshold
                                                    //)
                        );


template<typename T> bool NodeCheckAll              (typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold);
template<typename T> bool NodeCheckThreshold        (typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold);
template<typename T> bool NodeCheckInstr            (typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold);
template<typename T> bool NodeCheckInstrAndThreshold(typename SectionsTrace<T>::Node* n, const unsigned int aNumInstThreshold);

} //end namespace Skaere

#include "SectionsTraceToDot.impl.hpp"
