#include "skaereRunTime.hpp"
#include "runtime/skaere.h"
#include "fail/fail.hpp"

int  __runtimeSkaere_MPI_Init(int* argc, char *** argv){
  //std::cout << "Skaere :: Wrapper for MPI_Init" << std::endl;
  __runtimeSkaere_insideMPI();  return MPI_Init(argc, argv);
}



int __runtimeSkaere_MPI_Send(void *buf, int count, MPI_Datatype datatype, 
                           int dest, int tag, MPI_Comm comm)
  {    
    __runtimeSkaere_insideMPI();  return MPI_Send(buf, count,  datatype, 
                            dest, tag, comm);}

                            
int __runtimeSkaere_MPI_Bsend(void *buf, int count, MPI_Datatype datatype, 
                            int dest, int tag, MPI_Comm comm)                            
  {
    __runtimeSkaere_insideMPI();  return MPI_Bsend(buf, count,  datatype, 
                              dest, tag, comm);}

int __runtimeSkaere_MPI_Ssend(void *buf, int count, MPI_Datatype datatype, 
                            int dest, int tag, MPI_Comm comm)                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Ssend(buf, count,  datatype, 
                              dest, tag, comm);}

int __runtimeSkaere_MPI_Rsend(void *buf, int count, MPI_Datatype datatype, 
                            int dest, int tag, MPI_Comm comm)                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Rsend(buf, count,  datatype, 
                              dest, tag, comm);}

int __runtimeSkaere_MPI_Recv(void *buf, int count, MPI_Datatype datatype, 
                           int source, int tag, 
                           MPI_Comm comm, MPI_Status *status)                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Recv(buf, count,  datatype, 
                            source, tag, 
                            comm, status);}

int __runtimeSkaere_MPI_Get_count(MPI_Status* status, 
                                MPI_Datatype ty, int* count )                            
  {
    __runtimeSkaere_insideMPI();  return MPI_Get_count(status, 
                                  ty, count );}
                                  
int __runtimeSkaere_MPI_Isend(void *buf, int count, MPI_Datatype datatype, 
                            int dest, int tag, MPI_Comm comm, 
                            MPI_Request* request)
  {
    __runtimeSkaere_insideMPI();  return MPI_Isend(buf, count,  datatype, 
                              dest, tag, comm, 
                              request);}

int __runtimeSkaere_MPI_Ibsend(void *buf, int count, MPI_Datatype datatype, 
                             int dest, int tag, MPI_Comm comm, 
                             MPI_Request* request)                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Ibsend(buf, count,  datatype, 
                              dest, tag, comm, 
                                request);}

int __runtimeSkaere_MPI_Issend(void *buf, int count, MPI_Datatype datatype, 
                             int dest, int tag, MPI_Comm comm, 
                             MPI_Request* request)                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Issend(buf, count,  datatype, 
                              dest, tag, comm, 
                                request);}

int __runtimeSkaere_MPI_Irsend(void *buf, int count, MPI_Datatype datatype, 
                             int dest, int tag, MPI_Comm comm, 
                             MPI_Request* request)                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Irsend(buf, count,  datatype, 
                              dest, tag, comm, 
                                request);}

int __runtimeSkaere_MPI_Irecv( void* buf, int count, MPI_Datatype datatype, 
                             int source, int tag, MPI_Comm comm, 
                             MPI_Request* request )                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Irecv( buf, count,  datatype, 
                              source, tag, comm, 
                                request );}

int __runtimeSkaere_MPI_Wait( MPI_Request* request,
                            MPI_Status* status )                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Wait(  request,
                              status );}

int __runtimeSkaere_MPI_Waitany( int count,
                               MPI_Request* requests,
                               int* index,
                               MPI_Status* status )                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Waitany( count,
                                  requests,
                                index,
                                status );}

int __runtimeSkaere_MPI_Waitall( int count, 
                               MPI_Request* requests,
                               MPI_Status* statuses )                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Waitall( count, 
                                  requests,
                                statuses );}

int __runtimeSkaere_MPI_Test( MPI_Request* request, int* flag, 
                            MPI_Status* status )                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Test(  request, flag, 
                              status );}

int __runtimeSkaere_MPI_Testall( int count, MPI_Request* requests,
                               int* flag, MPI_Status* statuses )                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Testall( count,  requests,
                                flag, statuses );}

int __runtimeSkaere_MPI_Iprobe(int source, int tag, 
                             MPI_Comm comm, 
                             int* flag, MPI_Status* status)                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Iprobe(source, tag, 
                              comm, 
                              flag, status);}

int __runtimeSkaere_MPI_Probe(int source, int tag,
                            MPI_Comm comm, MPI_Status* status)                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Probe(source, tag,
                              comm, status);}

                              
int __runtimeSkaere_MPI_Cancel(MPI_Request* request)                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Cancel( request);}


int __runtimeSkaere_MPI_Sendrecv(
       void *sendbuf, int sendcount, MPI_Datatype sendtype,
       int dest, int sendtag, 
       void *recvbuf, int recvcount, MPI_Datatype recvtype, 
       int source, int recvtag,
       MPI_Comm comm,  MPI_Status *status)  
  {
    __runtimeSkaere_insideMPI();  return MPI_Sendrecv(
        sendbuf, sendcount,  sendtype,
        dest, sendtag, 
        recvbuf, recvcount,  recvtype, 
        source, recvtag,
        comm,  status);}


int __runtimeSkaere_MPI_Type_commit( MPI_Datatype* ty )        
  {
    __runtimeSkaere_insideMPI();  return MPI_Type_commit( ty);}

int __runtimeSkaere_MPI_Type_free( MPI_Datatype* ty )  
  {
    __runtimeSkaere_insideMPI();  return MPI_Type_free( ty);}

int __runtimeSkaere_MPI_Pack( void* inbuf, int incount, MPI_Datatype datatype, 
                            void* outbuf, int outsize, 
                            int* position, MPI_Comm comm )  
  {
    __runtimeSkaere_insideMPI();  return MPI_Pack( inbuf, incount,  datatype, 
                              outbuf, outsize, 
                              position, comm );}

int __runtimeSkaere_MPI_Unpack( void* inbuf, int insize, int* position,
                              void* outbuf, int outcount, MPI_Datatype datatype, 
                              MPI_Comm comm )                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Unpack( inbuf, insize, position,
                                outbuf, outcount,  datatype, 
                                comm );}

int __runtimeSkaere_MPI_Barrier(MPI_Comm comm)                                
  {
    __runtimeSkaere_insideMPI();  return MPI_Barrier(comm);}

int __runtimeSkaere_MPI_Bcast(void *buffer, int count, 
                            MPI_Datatype datatype,
                            int root, MPI_Comm comm)  
  {
    __runtimeSkaere_insideMPI();  return MPI_Bcast(buffer, count, 
                              datatype,
                              root, comm);}

int __runtimeSkaere_MPI_Gather(
       void *sendbuf, int sendcount, MPI_Datatype sendtype,
       void *recvbuf, int recvcount, MPI_Datatype recvtype,
       int root, MPI_Comm comm)                              
  {
    __runtimeSkaere_insideMPI();  return MPI_Gather(
        sendbuf, sendcount,  sendtype,
        recvbuf, recvcount,  recvtype,
        root, comm);}

int __runtimeSkaere_MPI_Gatherv(
       void *sendbuf, int sendcount, MPI_Datatype sendtype,
       void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype,
       int root, MPI_Comm comm)        
  {
    __runtimeSkaere_insideMPI();  return MPI_Gatherv(
        sendbuf, sendcount,  sendtype,
        recvbuf, recvcounts, displs,  recvtype,
        root, comm);}

int __runtimeSkaere_MPI_Allgather(
       void *sendbuf, int sendcount, MPI_Datatype sendtype,
       void *recvbuf, int recvcount, MPI_Datatype recvtype,
       MPI_Comm comm)        
  {
    __runtimeSkaere_insideMPI();  return MPI_Allgather(
        sendbuf, sendcount,  sendtype,
        recvbuf, recvcount,  recvtype,
        comm);}

int __runtimeSkaere_MPI_Allgatherv(
       void *sendbuf, int sendcount, MPI_Datatype sendtype,
       void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype,
       MPI_Comm comm)        
  {
    __runtimeSkaere_insideMPI();  return MPI_Allgatherv(
        sendbuf, sendcount,  sendtype,
        recvbuf, recvcounts, displs,  recvtype,
        comm);}

int __runtimeSkaere_MPI_Scatter(
       void* sendbuf, int sendcount, MPI_Datatype sendtype,
       void* recvbuf, int recvcount, MPI_Datatype recvtype,
       int root, MPI_Comm comm)        
  {
    __runtimeSkaere_insideMPI();  return MPI_Scatter(
        sendbuf, sendcount,  sendtype,
        recvbuf, recvcount,  recvtype,
        root, comm);}

int __runtimeSkaere_MPI_Scatterv(
       void* sendbuf, int *sendcounts, int *displs, MPI_Datatype sendtype,
       void* recvbuf, int recvcount, MPI_Datatype recvtype,
       int root, MPI_Comm comm)        
  {
    __runtimeSkaere_insideMPI();  return MPI_Scatterv(
        sendbuf, sendcounts, displs,  sendtype,
        recvbuf, recvcount,  recvtype,
        root, comm);}
    
int __runtimeSkaere_MPI_Alltoall(
       void* sendbuf, int sendcount, MPI_Datatype sendtype,
       void* recvbuf, int recvcount, MPI_Datatype recvtype,
       MPI_Comm comm)    
  {
    __runtimeSkaere_insideMPI();  return MPI_Alltoall(
        sendbuf, sendcount,  sendtype,
        recvbuf, recvcount,  recvtype,
        comm);}

int __runtimeSkaere_MPI_Alltoallv(
       void* sendbuf, int *sendcounts, int *sdispls, MPI_Datatype sendtype,
       void* recvbuf, int *recvcounts, int *rdispls, MPI_Datatype recvtype,
       MPI_Comm comm)        
  {
    __runtimeSkaere_insideMPI();  return MPI_Alltoallv(
        sendbuf, sendcounts, sdispls,  sendtype,
        recvbuf, recvcounts, rdispls,  recvtype,
        comm);}

int __runtimeSkaere_MPI_Reduce(void *sendbuf, void *recvbuf, 
                             int count,
                             MPI_Datatype datatype, MPI_Op op, 
                             int root, MPI_Comm comm)        
  {
    __runtimeSkaere_insideMPI();  return MPI_Reduce(sendbuf, recvbuf, 
                              count,
                                datatype, op, 
                              root, comm);}

int __runtimeSkaere_MPI_Allreduce(void *sendbuf, void *recvbuf, 
                                int count,
                                MPI_Datatype datatype, MPI_Op op, 
                                MPI_Comm comm)                              
  {
    __runtimeSkaere_insideMPI();
     int int_return = MPI_Allreduce(sendbuf, recvbuf, 
                                  count,
                                  datatype, op, 
                                  comm);
//      __runtimeSkaere_outsideMPI();
     return int_return;
  }

int __runtimeSkaere_MPI_Reduce_scatter(void *sendbuf, void *recvbuf, 
                                int *recvcounts,
                                MPI_Datatype datatype, MPI_Op op, 
                                MPI_Comm comm)                                  
  {
    __runtimeSkaere_insideMPI();  return MPI_Reduce_scatter(sendbuf, recvbuf, 
                                  recvcounts,
                                  datatype, op, 
                                  comm);}

int __runtimeSkaere_MPI_Scan(void *sendbuf, void *recvbuf,
                                int count,
                                MPI_Datatype datatype, MPI_Op op,
                                MPI_Comm comm)                                  
  {
    __runtimeSkaere_insideMPI();  return MPI_Scan(sendbuf, recvbuf,
                                  count,
                                  datatype, op,
                                  comm);}

int __runtimeSkaere_MPI_Op_create( MPI_User_function* function,
                                 int commute, 
                                 MPI_Op* op )                                  
  {
    __runtimeSkaere_insideMPI();  return MPI_Op_create( function,
                                  commute, 
                                    op );}

int __runtimeSkaere_MPI_Comm_create(MPI_Comm comm, MPI_Group group,
                                  MPI_Comm* newcomm)                                    
  {
    __runtimeSkaere_insideMPI();  return MPI_Comm_create(comm, group,
                                    newcomm);}

                                    
int __runtimeSkaere_MPI_Comm_dup(MPI_Comm comm, MPI_Comm* newcomm)                                    
  {
    __runtimeSkaere_insideMPI();  return MPI_Comm_dup(comm, newcomm);}

int __runtimeSkaere_MPI_Comm_free(MPI_Comm* comm)  
  {
    __runtimeSkaere_insideMPI();  return MPI_Comm_free(comm);}

int __runtimeSkaere_MPI_Comm_rank(MPI_Comm comm, int *rank)  
  {
    __runtimeSkaere_insideMPI();  return MPI_Comm_rank(comm, rank);}

int __runtimeSkaere_MPI_Comm_size(MPI_Comm comm, int *size)  
  {
    __runtimeSkaere_insideMPI();  return MPI_Comm_size(comm, size);}

int __runtimeSkaere_MPI_Error_string( int errorcode, char* string, 
                                    int* resultlen )  
  {
    __runtimeSkaere_insideMPI();  return MPI_Error_string( errorcode, string, 
                                      resultlen );}

int __runtimeSkaere_MPI_Initialized(int* flag)
  {
    __runtimeSkaere_insideMPI();  return MPI_Initialized(flag);}

int __runtimeSkaere_MPI_Finalize(void)
  {
    __runtimeSkaere_insideMPI();  return MPI_Finalize();}
