#include "kernel/mod2.h"

#include "misc/mylimits.h"
#include "misc/options.h"
#include "kernel/ideals.h"
#include "kernel/polys.h"
#include "polys/monomials/ring.h"
#include "kernel/GBEngine/kutil.h"
#include "kernel/GBEngine/kverify.h"
#include "Singular/feOpt.h"
#include <stdlib.h>
#include <string.h>

#ifdef HAVE_VSPACE
#include "reporter/si_signals.h"
#include "kernel/oswrapper/vspace.h"
#include "Singular/cntrlc.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "Singular/links/ssiLink.h"
#endif

BOOLEAN kVerify1(ideal F, ideal Q)
/* sequential version */
{
  assume (!rIsNCRing(currRing));
  kStrategy strat=new skStrategy;
  strat->ak = id_RankFreeModule(F,currRing);
  strat->kModW=kModW=NULL;
  strat->kHomW=kHomW=NULL;
  initBuchMoraCrit(strat); /*set Gebauer, honey, sugarCrit*/
  initBuchMoraPos(strat);
  initBba(strat);
  initBuchMora(F, Q,strat);
  /*initBuchMora:*/
    strat->tail = pInit();
    /*- set s -*/
    strat->sl = -1;
    /*- set L -*/
    strat->Lmax = ((IDELEMS(F)+setmaxLinc-1)/setmaxLinc)*setmaxLinc;
    strat->Ll = -1;
    strat->L = initL(strat->Lmax);
    /*- set B -*/
    strat->Bmax = setmaxL;
    strat->Bl = -1;
    strat->B = initL();
    /*- set T -*/
    strat->tl = -1;
    strat->tmax = setmaxT;
    strat->T = initT();
    strat->R = initR();
    strat->sevT = initsevT();
    /*- init local data struct.---------------------------------------- -*/
    strat->P.ecart=0;
    strat->P.length=0;
    strat->P.pLength=0;
    initS(F, Q,strat); /*sets also S, ecartS, fromQ */
    strat->fromT = FALSE;
    strat->noTailReduction = FALSE;
  /*----------------------------------------------------------------------*/
  /* build pairs */
  if (strat->fromQ!=NULL)
  {
    for(int i=1; i<=strat->sl;i++)
    {
      initenterpairs(strat->S[i],i-1,0,strat->fromQ[i],strat);
    }
  }
  else
  {
    for(int i=1; i<=strat->sl;i++)
    {
      initenterpairs(strat->S[i],i-1,0,FALSE,strat);
    }
  }
  if (TEST_OPT_PROT) printf("%d pairs created\n",strat->Ll+1);
  if (TEST_OPT_DEBUG) messageSets(strat);
  /*---------------------------------------------------------------------*/
  BOOLEAN all_okay=TRUE;
  for(int i=strat->Ll;i>=0; i--)
  {
  /* spolys */
    int red_result=1;
    /* picks the last element from the lazyset L */
    strat->P = strat->L[i];
    if (pNext(strat->P.p) == strat->tail)
    {
      // deletes the short spoly
      pLmFree(strat->P.p);
      strat->P.p = NULL;
      poly m1 = NULL, m2 = NULL;
      kCheckSpolyCreation(&(strat->P), strat, m1, m2);
      ksCreateSpoly(&(strat->P), NULL, strat->use_buckets,
                    strat->tailRing, m1, m2, strat->R);
    }
    if ((strat->P.p == NULL) && (strat->P.t_p == NULL))
    {
      red_result = 0;
    }
    else
    {
      if (TEST_OPT_DEGBOUND
            && (currRing->pFDeg(strat->P.p,currRing)>Kstd1_deg))
      {
        /*
        * omit pair
        * if 24 IN test and the degree of P is bigger then
        *a predefined number Kstd1_deg
        */
        strat->P.Delete();
        red_result=0;
        if (TEST_OPT_PROT) { printf("D"); mflush(); }
      }
      else
      {
        int sl=strat->sl;
        strat->P.GetP();
        poly p=redNF(strat->P.p,sl,TRUE,strat);
        if (p==NULL) red_result=0;
        #ifdef KDEBUG
        else
        {
          if (TEST_OPT_DEBUG)
          {
            printf("p: ");p_wrp(p,currRing, currRing); printf("\n");
          }
        }
        #endif
      }
    }
    if (red_result!=0)
    {
      if (TEST_OPT_PROT) printf("fail: %d, result: %d\n",i,red_result);
      all_okay=FALSE;
    }
  }
  return all_okay;
}

BOOLEAN kVerify2(ideal F, ideal Q)
/* parallel version */
{
#ifdef HAVE_VSPACE
  assume (!rIsNCRing(currRing));
  kStrategy strat=new skStrategy;
  strat->ak = id_RankFreeModule(F,currRing);
  strat->kModW=kModW=NULL;
  strat->kHomW=kHomW=NULL;
  initBuchMoraCrit(strat); /*set Gebauer, honey, sugarCrit*/
  initBuchMoraPos(strat);
  initBba(strat);
  initBuchMora(F, Q,strat);
  /*initBuchMora:*/
    strat->tail = pInit();
    /*- set s -*/
    strat->sl = -1;
    /*- set L -*/
    strat->Lmax = ((IDELEMS(F)+setmaxLinc-1)/setmaxLinc)*setmaxLinc;
    strat->Ll = -1;
    strat->L = initL(strat->Lmax);
    /*- set B -*/
    strat->Bmax = setmaxL;
    strat->Bl = -1;
    strat->B = initL();
    /*- set T -*/
    strat->tl = -1;
    strat->tmax = setmaxT;
    strat->T = initT();
    strat->R = initR();
    strat->sevT = initsevT();
    /*- init local data struct.---------------------------------------- -*/
    strat->P.ecart=0;
    strat->P.length=0;
    strat->P.pLength=0;
    initS(F, Q,strat); /*sets also S, ecartS, fromQ */
    strat->fromT = FALSE;
    strat->noTailReduction = FALSE;
  /*----------------------------------------------------------------------*/
  /* build pairs */
  if (strat->fromQ!=NULL)
  {
    for(int i=1; i<=strat->sl;i++)
    {
      initenterpairs(strat->S[i],i-1,0,strat->fromQ[i],strat);
    }
  }
  else
  {
    for(int i=1; i<=strat->sl;i++)
    {
      initenterpairs(strat->S[i],i-1,0,FALSE,strat);
    }
  }
  if (TEST_OPT_PROT) printf("%d pairs created\n",strat->Ll+1);
  if (TEST_OPT_DEGBOUND)
  {
    for(int i=strat->Ll; i>=0; i--)
    {
      if (currRing->pFDeg(strat->L[i].p,currRing)>Kstd1_deg)
      {
        /*
        * omit pairs if 24 IN test and the degree of L[i] is bigger then
        *a predefined number Kstd1_deg
        */
        deleteInL(strat->L,&strat->Ll,i,strat);
        if (TEST_OPT_PROT) { printf("D"); mflush(); }
      }
    }
  }
  if (TEST_OPT_DEBUG) messageSets(strat);
  /*---------------------------------------------------------------------*/
  BOOLEAN all_okay=TRUE;
  int cpus=(int)(long)feOptValue(FE_OPT_CPUS);
  if (cpus>=vspace::internals::MAX_PROCESS)
    cpus=vspace::internals::MAX_PROCESS-1;
  /* start no more than MAX_PROCESS-1 children */
  if (cpus>strat->Ll) cpus=strat->Ll;
  /* start no more children than elements in L */
  int parent_pid=getpid();
  using namespace vspace;
  vmem_init();
  // Create a queue of int
  VRef<Queue<int> > queue = vnew<Queue<int> >();
  VRef<Queue<int> > rqueue = vnew<Queue<int> >();
  for(int i=strat->Ll;i>=0; i--)
  {
   queue->enqueue(i); // the tasks: process pair L[i]
  }
  for(int i=cpus*2;i>=0;i--)
  {
    queue->enqueue(-1); // stop sign, one for each child
  }
  int pid;
  for (int i=0;i<cpus;i++)
  {
    pid = fork_process();
    if (pid==0) break; //child
  }
  // input queue: queue: <index of L> -1 ...-1
  // output queue: rqueue: pid .. pid 0 pid... pid for failure
  //                      pid ... pid for success
  if (parent_pid!=getpid()) // child ------------------------------------------
  {
    si_set_signal(SIGTERM,sig_term_hdl_child);
    singular_close_links();
    loop
    {
      int ind=queue->dequeue();
      if (ind== -1) // negative number as stop sign
      {
        if (TEST_OPT_PROT) printf("child: end of queue\n");
        rqueue->enqueue(getpid()); // report pid of ending child
        _exit(0);
      }
      int red_result=1;
      /* picks the element from the lazyset L */
      LObject P;
      P = strat->L[ind];
      if (TEST_OPT_PROT) { printf("."); mflush();}
      if (pNext(P.p) == strat->tail)
      {
        // deletes the short spoly
        pLmFree(P.p);
        P.p = NULL;
        poly m1 = NULL, m2 = NULL;
        /* spoly */
        kCheckSpolyCreation(&P, strat, m1, m2);
        ksCreateSpoly(&P, NULL, strat->use_buckets,
                    strat->tailRing, m1, m2, strat->R);
      }
      if ((P.p == NULL) && (P.t_p == NULL))
      {
        red_result = 0;
      }
      else
      {
        /* reduction */
        int sl=strat->sl;
        P.GetP();
        poly p=redNF(P.p,sl,TRUE,strat);
        if (p==NULL) red_result=0;
        #ifdef KDEBUG
        else
        {
          if (TEST_OPT_DEBUG)
          {
            printf("p: ");p_wrp(p,currRing, currRing); printf("\n");
          }
        }
        #endif
      }
      if (red_result!=0)
      {
        if (TEST_OPT_PROT) printf("fail: result: %d\n",red_result);
        rqueue->enqueue(0);
        rqueue->enqueue(getpid()); // pid of ending child
        _exit(0); // found fail, no need to test further
      }
    }
    // should never be reached:
    rqueue->enqueue(getpid()); // stop sign
    _exit(0); // all done, quit child
  }
  else // parent ---------------------------------------------------
  {
    if (TEST_OPT_PROT) printf("%d children created\n",cpus);
    // wait for all process to stop:
    // each process sends 0 for failure and its pid at end
    // for success only the pid is send the end
    int res;
    int remaining_children=cpus;
    while(remaining_children>0)
    {
      res=rqueue->dequeue();
      if (res>0) // a child finished
      {
        if (TEST_OPT_PROT) { printf("c");mflush(); }
        if (si_waitpid(res,NULL,WNOHANG)==0) // child not finished
        {
          if (kill(res,0)==0) // child is still running
          {
            struct timespec t;
            struct timespec rem;
            // wait till signal or 10s:
            t.tv_sec=10;
            t.tv_nsec=0;
            nanosleep(&t, &rem); // should be interrupted by signal: SIG_CHLD
            // child finished ?
            if (si_waitpid(res,NULL,WNOHANG) ==0) //child not finished
            {
              kill(res,SIGTERM);
              t.tv_sec=10;
              t.tv_nsec=0;
              nanosleep(&t, &rem); // should be interrupted by signal: SIG_CHLD
              si_waitpid(res,NULL,WNOHANG);
            }
          }
        }
        remaining_children--;
      }
      else if (res==0) // not a GB - clean up and return 0
      {
        if (TEST_OPT_PROT) { printf("C"); mflush(); }
        all_okay=FALSE;
        // clean queue:
        int dummy;
        do
        {
          dummy=queue->dequeue(); // remove remaining tasks
        } while (dummy>=0);
      }
    }
    // removes queues
    queue.free();
    rqueue.free();
    vmem_deinit();
    return all_okay;
  }
#else
  return kVerify1(F,Q);
#endif
}
