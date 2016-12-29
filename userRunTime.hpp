#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>
//#include "OutputStrategy.hpp"
#include "Stats.hpp"
#include "SectionsTrace.hpp"
//we are forcing a dependence of runtime_Testing over PAPI
#include <papi.h> // papi's long_long

#include "extrae_user_events.h"   // Extrae API
#include "Metrics.hpp"

#define SKAERE_LOG
#include "../log/fullLog.hpp"
#include "../log/blankLog.hpp"

namespace Skaere {

  /// We register here any may/must alias access to memory.
  /// Candidates: Memory, Output, SectionsBlabla -> make a list on TeX
  template<typename Metric, template<typename> class LogPolicy>
  struct UserRuntime : public LogPolicy<Metric>, public Metric {
    UserRuntime(bool const flushToFile, bool const showStats, int const timeThreshold, 
                                           int const instThr,  int const simlThr );
    ~UserRuntime();

    bool  startSection  (char const*const aSectionName);
    void  endSection    (char const*const aSectionName);
    void  tick          ();
    void  tock          ();
    void  end           ();
    void  insideMPI     ();
    void  outsideMPI    ();

    Stats mStats;
  private:
    void          getMpiRank();
    std::string   logName() const;
    unsigned int  newIdentifier();
    
    void extraeRecordEventNames();
    int  getSectionExtraeId (char const*const aName);
    int  computeId(int const i) const;
    void handle_error       (int i);

    bool  updateSection                     (typename SectionsTrace<Metric>::Node* n);
    bool  openParentIfAllChildrenAreClosed  (typename SectionsTrace<Metric>::Node* n);
    bool  openParentAndCloseItsChildren     (typename SectionsTrace<Metric>::Node* n);
    bool  haveSiblingsEnoughInfo            (typename SectionsTrace<Metric>::Node* n);
    bool  areAllSiblingsSimilar             (typename SectionsTrace<Metric>::Node* n);
    bool  noSiblingsIsOnHold                (typename SectionsTrace<Metric>::Node* n);


    bool  hasEnoughInfo (const Section<Metric>& section);

    void  addMeasure    (const Metric& aMetrics);
    void  updateMetrics (const Metric& aMetrics);

    bool  canBeEmitted  (const Section<Metric>& aSection);

  private:
    SectionsTrace<Metric> mSections;

    //OutputStrategy<> mBuffer;
    unsigned int mId=0;
    unsigned int mExecutedInstructions=0;

    bool        mShowStats;

    //  Extrae sections
    int       mFreeExtraeId;
    const int mExtraeSkaereEvent            = 1042;
    const int mExtraeSkaereEventNumInst     = 1043;
    const int mExtraeSkaereEventNumMem      = 1044;
    const int mExtraeSkaereEventNumPapiCycl = 1045;
    const int mExtraeSkaereEventNumPapiInst = 1046;    
    extrae_type_t   mExtraeSkaereCountersType[5];
    extrae_value_t  mExtraeSkaereCountersVal[5];

    int       mFreeUniqueId;
    std::map<char const*, int> mIdsOfSections;
    std::map<int, char const*> mSectionsOfId;

    char const * mSkaere_unused = "unused";
    char const * mSkaere_none   = "none";
    
    //mpi info
    bool mHasMpiRank;
    int  mMpiRank;
    char const * mMpiCallId;

    //  Configuration of runtime
    float const mTimeThreshold;

    // Acceptance tests only
#ifdef SKAERE_LOG
    std::ofstream*        mStatsfile;
#endif
    Metric  mMetricsRuntime; //specialized
    Metric  mMetricsBetweenEmittedSections;
    int                   mStep;
    int                   mNumGraphs;
    int mExitCount;

    //  Redundancy
    int   mNumOpenSections;
    std::vector<char const*> mOpenSections;
    bool isSubsetOfInterest(const Section<Metric>& aSection) const;


  public:
    //maybe options pertain to other place
    bool        mEnable         = true;
    bool        mEnableSections = true;

  private:
    void newSectionNotToInstrument(char const*const aSectionName);
    void newSectionToInstrument   (char const*const aSectionName);
    bool allChildrenNonInst       (typename SectionsTrace<Metric>::Node* n);
    bool parentIsOpen             (typename SectionsTrace<Metric>::Node* n);
    bool parentIsInstrumented     (typename SectionsTrace<Metric>::Node* n);
    bool allChildrenAreDead       (typename SectionsTrace<Metric>::Node* n) const;
    bool allParentAreInHold       (typename SectionsTrace<Metric>::Node* n) const;


    void printNodeAndParentMetrics(std::ostream& stream, typename SectionsTrace<Metric>::Node* const n, typename SectionsTrace<Metric>::Node* const p);

    void checkStateIntegrity();
    void checkSectionsSizes();
    void checkMetrics(const Metric& aMetrics);
    

    int  newId(char const*const aName);

  public:
    void outputSectionsAsDot();
  private:
    ////////////////////////////////////////////////////////////////////////
    // Papi variables
    int        eventSet;
    long_long  values[2];

    // These have to be specialized
  public:
    //these handle reading of metrics
    void          initMetrics();
    const Metric  readMetrics();

    void  AddExecutedInstructions(int execInstr, int const numMemOps);
  };

} //end namespace
