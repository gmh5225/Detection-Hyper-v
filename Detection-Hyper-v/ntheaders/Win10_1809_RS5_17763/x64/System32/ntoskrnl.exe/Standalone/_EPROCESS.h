typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 3; /* bit position: 3 */
              /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[20];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x00a8 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef union _KEXECUTE_OPTIONS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ExecuteDisable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ExecuteEnable : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char DisableThunkEmulation : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char Permanent : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char ExecuteDispatchEnable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned char ImageDispatchEnable : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned char DisableExceptionChainValidation : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned char Spare : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ volatile unsigned char ExecuteOptions;
    /* 0x0000 */ unsigned char ExecuteOptionsNV;
  }; /* size: 0x0001 */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef union _KSTACK_COUNT
{
  union
  {
    /* 0x0000 */ long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long State : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long StackCount : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KSTACK_COUNT, *PKSTACK_COUNT; /* size: 0x0004 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0028 */ unsigned __int64 DirectoryTableBase;
  /* 0x0030 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0040 */ unsigned long ProcessLock;
  /* 0x0044 */ unsigned long ProcessTimerDelay;
  /* 0x0048 */ unsigned __int64 DeepFreezeStartTime;
  /* 0x0050 */ struct _KAFFINITY_EX Affinity;
  /* 0x00f8 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0108 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x0110 */ volatile struct _KAFFINITY_EX ActiveProcessors;
  union
  {
    struct /* bitfield */
    {
      /* 0x01b8 */ unsigned long AutoAlignment : 1; /* bit position: 0 */
      /* 0x01b8 */ unsigned long DisableBoost : 1; /* bit position: 1 */
      /* 0x01b8 */ unsigned long DisableQuantum : 1; /* bit position: 2 */
      /* 0x01b8 */ unsigned long DeepFreeze : 1; /* bit position: 3 */
      /* 0x01b8 */ unsigned long TimerVirtualization : 1; /* bit position: 4 */
      /* 0x01b8 */ unsigned long CheckStackExtents : 1; /* bit position: 5 */
      /* 0x01b8 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 6 */
      /* 0x01b8 */ unsigned long PpmPolicy : 3; /* bit position: 7 */
      /* 0x01b8 */ unsigned long ActiveGroupsMask : 20; /* bit position: 10 */
      /* 0x01b8 */ unsigned long VaSpaceDeleted : 1; /* bit position: 30 */
      /* 0x01b8 */ unsigned long ReservedFlags : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x01b8 */ volatile long ProcessFlags;
  }; /* size: 0x0004 */
  /* 0x01bc */ char BasePriority;
  /* 0x01bd */ char QuantumReset;
  /* 0x01be */ char Visited;
  /* 0x01bf */ union _KEXECUTE_OPTIONS Flags;
  /* 0x01c0 */ unsigned long ThreadSeed[20];
  /* 0x0210 */ unsigned short IdealNode[20];
  /* 0x0238 */ unsigned short IdealGlobalNode;
  /* 0x023a */ unsigned short Spare1;
  /* 0x023c */ volatile union _KSTACK_COUNT StackCount;
  /* 0x0240 */ struct _LIST_ENTRY ProcessListEntry;
  /* 0x0250 */ unsigned __int64 CycleTime;
  /* 0x0258 */ unsigned __int64 ContextSwitches;
  /* 0x0260 */ struct _KSCHEDULING_GROUP* SchedulingGroup;
  /* 0x0268 */ unsigned long FreezeCount;
  /* 0x026c */ unsigned long KernelTime;
  /* 0x0270 */ unsigned long UserTime;
  /* 0x0274 */ unsigned long ReadyTime;
  /* 0x0278 */ unsigned __int64 UserDirectoryTableBase;
  /* 0x0280 */ unsigned char AddressPolicy;
  /* 0x0281 */ unsigned char Spare2[71];
  /* 0x02c8 */ void* InstrumentationCallback;
  union
  {
    union
    {
      /* 0x02d0 */ unsigned __int64 SecureHandle;
      struct
      {
        struct /* bitfield */
        {
          /* 0x02d0 */ unsigned __int64 SecureProcess : 1; /* bit position: 0 */
          /* 0x02d0 */ unsigned __int64 Unused : 1; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0008 */ Flags;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ SecureState;
} KPROCESS, *PKPROCESS; /* size: 0x02d8 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _SE_AUDIT_PROCESS_CREATION_INFO
{
  /* 0x0000 */ struct _OBJECT_NAME_INFORMATION* ImageFileName;
} SE_AUDIT_PROCESS_CREATION_INFO, *PSE_AUDIT_PROCESS_CREATION_INFO; /* size: 0x0008 */

typedef struct _MMSUPPORT_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned char Reserved0 : 3; /* bit position: 3 */
        /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
        /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
        /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
        /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short u1;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned char MemoryPriority;
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
      /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
      /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
      /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 4 */
      /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0003 */ unsigned char u2;
  }; /* size: 0x0001 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 TrimmedPageCount;
  /* 0x0010 */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ unsigned __int64 AgeDistribution[8];
  /* 0x0068 */ struct _KGATE* ExitOutswapGate;
  /* 0x0070 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0078 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0080 */ unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0088 */ unsigned __int64 WorkingSetSize;
  /* 0x0090 */ unsigned __int64 WorkingSetPrivateSize;
  /* 0x0098 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x00a0 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x00a8 */ unsigned long HardFaultCount;
  /* 0x00ac */ unsigned short LastTrimStamp;
  /* 0x00ae */ unsigned short PartitionId;
  /* 0x00b0 */ unsigned __int64 SelfmapLock;
  /* 0x00b8 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x00bc */ long __PADDING__[1];
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x00c0 */

typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ long GoodCitizenWaiting;
  /* 0x0008 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x0010 */ unsigned __int64 ResetPagesRepurposedCount;
  /* 0x0018 */ void* WsSwapSupport;
  /* 0x0020 */ void* CommitReleaseContext;
  /* 0x0028 */ volatile long WorkingSetCoreLock;
  /* 0x0030 */ void* AccessLog;
  /* 0x0038 */ volatile unsigned __int64 ChargedWslePages;
  /* 0x0040 */ unsigned __int64 ActualWslePages;
  /* 0x0048 */ void* ShadowMapping;
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0050 */

typedef struct _MMSUPPORT_FULL
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE Instance;
  /* 0x00c0 */ struct _MMSUPPORT_SHARED Shared;
} MMSUPPORT_FULL, *PMMSUPPORT_FULL; /* size: 0x0110 */

typedef struct _ALPC_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _LIST_ENTRY ViewListHead;
  /* 0x0018 */ volatile unsigned __int64 PagedPoolQuotaCache;
} ALPC_PROCESS_CONTEXT, *PALPC_PROCESS_CONTEXT; /* size: 0x0020 */

typedef struct _PS_PROTECTION
{
  union
  {
    /* 0x0000 */ unsigned char Level;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Type : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned char Audit : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char Signer : 4; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} PS_PROTECTION, *PPS_PROTECTION; /* size: 0x0001 */

typedef union _PS_INTERLOCKED_TIMER_DELAY_VALUES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 DelayMs : 30; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 CoalescingWindowMs : 30; /* bit position: 30 */
      /* 0x0000 */ unsigned __int64 Reserved : 1; /* bit position: 60 */
      /* 0x0000 */ unsigned __int64 NewTimerWheel : 1; /* bit position: 61 */
      /* 0x0000 */ unsigned __int64 Retry : 1; /* bit position: 62 */
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 All;
  }; /* size: 0x0008 */
} PS_INTERLOCKED_TIMER_DELAY_VALUES, *PPS_INTERLOCKED_TIMER_DELAY_VALUES; /* size: 0x0008 */

typedef struct _WNF_STATE_NAME
{
  /* 0x0000 */ unsigned long Data[2];
} WNF_STATE_NAME, *PWNF_STATE_NAME; /* size: 0x0008 */

typedef struct _JOBOBJECT_WAKE_FILTER
{
  /* 0x0000 */ unsigned long HighEdgeFilter;
  /* 0x0004 */ unsigned long LowEdgeFilter;
} JOBOBJECT_WAKE_FILTER, *PJOBOBJECT_WAKE_FILTER; /* size: 0x0008 */

typedef struct _PS_PROCESS_WAKE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NotificationChannel;
  /* 0x0008 */ unsigned long WakeCounters[7];
  /* 0x0024 */ struct _JOBOBJECT_WAKE_FILTER WakeFilter;
  /* 0x002c */ unsigned long NoWakeCounter;
} PS_PROCESS_WAKE_INFORMATION, *PPS_PROCESS_WAKE_INFORMATION; /* size: 0x0030 */

typedef struct _EPROCESS
{
  /* 0x0000 */ struct _KPROCESS Pcb;
  /* 0x02d8 */ struct _EX_PUSH_LOCK ProcessLock;
  /* 0x02e0 */ void* UniqueProcessId;
  /* 0x02e8 */ struct _LIST_ENTRY ActiveProcessLinks;
  /* 0x02f8 */ struct _EX_RUNDOWN_REF RundownProtect;
  union
  {
    /* 0x0300 */ unsigned long Flags2;
    struct /* bitfield */
    {
      /* 0x0300 */ unsigned long JobNotReallyActive : 1; /* bit position: 0 */
      /* 0x0300 */ unsigned long AccountingFolded : 1; /* bit position: 1 */
      /* 0x0300 */ unsigned long NewProcessReported : 1; /* bit position: 2 */
      /* 0x0300 */ unsigned long ExitProcessReported : 1; /* bit position: 3 */
      /* 0x0300 */ unsigned long ReportCommitChanges : 1; /* bit position: 4 */
      /* 0x0300 */ unsigned long LastReportMemory : 1; /* bit position: 5 */
      /* 0x0300 */ unsigned long ForceWakeCharge : 1; /* bit position: 6 */
      /* 0x0300 */ unsigned long CrossSessionCreate : 1; /* bit position: 7 */
      /* 0x0300 */ unsigned long NeedsHandleRundown : 1; /* bit position: 8 */
      /* 0x0300 */ unsigned long RefTraceEnabled : 1; /* bit position: 9 */
      /* 0x0300 */ unsigned long PicoCreated : 1; /* bit position: 10 */
      /* 0x0300 */ unsigned long EmptyJobEvaluated : 1; /* bit position: 11 */
      /* 0x0300 */ unsigned long DefaultPagePriority : 3; /* bit position: 12 */
      /* 0x0300 */ unsigned long PrimaryTokenFrozen : 1; /* bit position: 15 */
      /* 0x0300 */ unsigned long ProcessVerifierTarget : 1; /* bit position: 16 */
      /* 0x0300 */ unsigned long RestrictSetThreadContext : 1; /* bit position: 17 */
      /* 0x0300 */ unsigned long AffinityPermanent : 1; /* bit position: 18 */
      /* 0x0300 */ unsigned long AffinityUpdateEnable : 1; /* bit position: 19 */
      /* 0x0300 */ unsigned long PropagateNode : 1; /* bit position: 20 */
      /* 0x0300 */ unsigned long ExplicitAffinity : 1; /* bit position: 21 */
      /* 0x0300 */ unsigned long ProcessExecutionState : 2; /* bit position: 22 */
      /* 0x0300 */ unsigned long EnableReadVmLogging : 1; /* bit position: 24 */
      /* 0x0300 */ unsigned long EnableWriteVmLogging : 1; /* bit position: 25 */
      /* 0x0300 */ unsigned long FatalAccessTerminationRequested : 1; /* bit position: 26 */
      /* 0x0300 */ unsigned long DisableSystemAllowedCpuSet : 1; /* bit position: 27 */
      /* 0x0300 */ unsigned long ProcessStateChangeRequest : 2; /* bit position: 28 */
      /* 0x0300 */ unsigned long ProcessStateChangeInProgress : 1; /* bit position: 30 */
      /* 0x0300 */ unsigned long InPrivate : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0304 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0304 */ unsigned long CreateReported : 1; /* bit position: 0 */
      /* 0x0304 */ unsigned long NoDebugInherit : 1; /* bit position: 1 */
      /* 0x0304 */ unsigned long ProcessExiting : 1; /* bit position: 2 */
      /* 0x0304 */ unsigned long ProcessDelete : 1; /* bit position: 3 */
      /* 0x0304 */ unsigned long ManageExecutableMemoryWrites : 1; /* bit position: 4 */
      /* 0x0304 */ unsigned long VmDeleted : 1; /* bit position: 5 */
      /* 0x0304 */ unsigned long OutswapEnabled : 1; /* bit position: 6 */
      /* 0x0304 */ unsigned long Outswapped : 1; /* bit position: 7 */
      /* 0x0304 */ unsigned long FailFastOnCommitFail : 1; /* bit position: 8 */
      /* 0x0304 */ unsigned long Wow64VaSpace4Gb : 1; /* bit position: 9 */
      /* 0x0304 */ unsigned long AddressSpaceInitialized : 2; /* bit position: 10 */
      /* 0x0304 */ unsigned long SetTimerResolution : 1; /* bit position: 12 */
      /* 0x0304 */ unsigned long BreakOnTermination : 1; /* bit position: 13 */
      /* 0x0304 */ unsigned long DeprioritizeViews : 1; /* bit position: 14 */
      /* 0x0304 */ unsigned long WriteWatch : 1; /* bit position: 15 */
      /* 0x0304 */ unsigned long ProcessInSession : 1; /* bit position: 16 */
      /* 0x0304 */ unsigned long OverrideAddressSpace : 1; /* bit position: 17 */
      /* 0x0304 */ unsigned long HasAddressSpace : 1; /* bit position: 18 */
      /* 0x0304 */ unsigned long LaunchPrefetched : 1; /* bit position: 19 */
      /* 0x0304 */ unsigned long Background : 1; /* bit position: 20 */
      /* 0x0304 */ unsigned long VmTopDown : 1; /* bit position: 21 */
      /* 0x0304 */ unsigned long ImageNotifyDone : 1; /* bit position: 22 */
      /* 0x0304 */ unsigned long PdeUpdateNeeded : 1; /* bit position: 23 */
      /* 0x0304 */ unsigned long VdmAllowed : 1; /* bit position: 24 */
      /* 0x0304 */ unsigned long ProcessRundown : 1; /* bit position: 25 */
      /* 0x0304 */ unsigned long ProcessInserted : 1; /* bit position: 26 */
      /* 0x0304 */ unsigned long DefaultIoPriority : 3; /* bit position: 27 */
      /* 0x0304 */ unsigned long ProcessSelfDelete : 1; /* bit position: 30 */
      /* 0x0304 */ unsigned long SetTimerResolutionLink : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0308 */ union _LARGE_INTEGER CreateTime;
  /* 0x0310 */ unsigned __int64 ProcessQuotaUsage[2];
  /* 0x0320 */ unsigned __int64 ProcessQuotaPeak[2];
  /* 0x0330 */ unsigned __int64 PeakVirtualSize;
  /* 0x0338 */ unsigned __int64 VirtualSize;
  /* 0x0340 */ struct _LIST_ENTRY SessionProcessLinks;
  union
  {
    /* 0x0350 */ void* ExceptionPortData;
    /* 0x0350 */ unsigned __int64 ExceptionPortValue;
    /* 0x0350 */ unsigned __int64 ExceptionPortState : 3; /* bit position: 0 */
  }; /* size: 0x0008 */
  /* 0x0358 */ struct _EX_FAST_REF Token;
  /* 0x0360 */ unsigned __int64 MmReserved;
  /* 0x0368 */ struct _EX_PUSH_LOCK AddressCreationLock;
  /* 0x0370 */ struct _EX_PUSH_LOCK PageTableCommitmentLock;
  /* 0x0378 */ struct _ETHREAD* RotateInProgress;
  /* 0x0380 */ struct _ETHREAD* ForkInProgress;
  /* 0x0388 */ struct _EJOB* volatile CommitChargeJob;
  /* 0x0390 */ struct _RTL_AVL_TREE CloneRoot;
  /* 0x0398 */ volatile unsigned __int64 NumberOfPrivatePages;
  /* 0x03a0 */ volatile unsigned __int64 NumberOfLockedPages;
  /* 0x03a8 */ void* Win32Process;
  /* 0x03b0 */ struct _EJOB* volatile Job;
  /* 0x03b8 */ void* SectionObject;
  /* 0x03c0 */ void* SectionBaseAddress;
  /* 0x03c8 */ unsigned long Cookie;
  /* 0x03d0 */ struct _PAGEFAULT_HISTORY* WorkingSetWatch;
  /* 0x03d8 */ void* Win32WindowStation;
  /* 0x03e0 */ void* InheritedFromUniqueProcessId;
  /* 0x03e8 */ void* Spare0;
  /* 0x03f0 */ volatile unsigned __int64 OwnerProcessId;
  /* 0x03f8 */ struct _PEB* Peb;
  /* 0x0400 */ struct _MM_SESSION_SPACE* Session;
  /* 0x0408 */ void* Spare1;
  /* 0x0410 */ struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;
  /* 0x0418 */ struct _HANDLE_TABLE* ObjectTable;
  /* 0x0420 */ void* DebugPort;
  /* 0x0428 */ struct _EWOW64PROCESS* WoW64Process;
  /* 0x0430 */ void* DeviceMap;
  /* 0x0438 */ void* EtwDataSource;
  /* 0x0440 */ unsigned __int64 PageDirectoryPte;
  /* 0x0448 */ struct _FILE_OBJECT* ImageFilePointer;
  /* 0x0450 */ unsigned char ImageFileName[15];
  /* 0x045f */ unsigned char PriorityClass;
  /* 0x0460 */ void* SecurityPort;
  /* 0x0468 */ struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
  /* 0x0470 */ struct _LIST_ENTRY JobLinks;
  /* 0x0480 */ void* HighestUserAddress;
  /* 0x0488 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0498 */ volatile unsigned long ActiveThreads;
  /* 0x049c */ unsigned long ImagePathHash;
  /* 0x04a0 */ unsigned long DefaultHardErrorProcessing;
  /* 0x04a4 */ long LastThreadExitStatus;
  /* 0x04a8 */ struct _EX_FAST_REF PrefetchTrace;
  /* 0x04b0 */ void* LockedPagesList;
  /* 0x04b8 */ union _LARGE_INTEGER ReadOperationCount;
  /* 0x04c0 */ union _LARGE_INTEGER WriteOperationCount;
  /* 0x04c8 */ union _LARGE_INTEGER OtherOperationCount;
  /* 0x04d0 */ union _LARGE_INTEGER ReadTransferCount;
  /* 0x04d8 */ union _LARGE_INTEGER WriteTransferCount;
  /* 0x04e0 */ union _LARGE_INTEGER OtherTransferCount;
  /* 0x04e8 */ unsigned __int64 CommitChargeLimit;
  /* 0x04f0 */ volatile unsigned __int64 CommitCharge;
  /* 0x04f8 */ volatile unsigned __int64 CommitChargePeak;
  /* 0x0500 */ struct _MMSUPPORT_FULL Vm;
  /* 0x0610 */ struct _LIST_ENTRY MmProcessLinks;
  /* 0x0620 */ unsigned long ModifiedPageCount;
  /* 0x0624 */ long ExitStatus;
  /* 0x0628 */ struct _RTL_AVL_TREE VadRoot;
  /* 0x0630 */ void* VadHint;
  /* 0x0638 */ unsigned __int64 VadCount;
  /* 0x0640 */ volatile unsigned __int64 VadPhysicalPages;
  /* 0x0648 */ unsigned __int64 VadPhysicalPagesLimit;
  /* 0x0650 */ struct _ALPC_PROCESS_CONTEXT AlpcContext;
  /* 0x0670 */ struct _LIST_ENTRY TimerResolutionLink;
  /* 0x0680 */ struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
  /* 0x0688 */ unsigned long RequestedTimerResolution;
  /* 0x068c */ unsigned long SmallestTimerResolution;
  /* 0x0690 */ union _LARGE_INTEGER ExitTime;
  /* 0x0698 */ struct _INVERTED_FUNCTION_TABLE* InvertedFunctionTable;
  /* 0x06a0 */ struct _EX_PUSH_LOCK InvertedFunctionTableLock;
  /* 0x06a8 */ unsigned long ActiveThreadsHighWatermark;
  /* 0x06ac */ unsigned long LargePrivateVadCount;
  /* 0x06b0 */ struct _EX_PUSH_LOCK ThreadListLock;
  /* 0x06b8 */ void* WnfContext;
  /* 0x06c0 */ struct _EJOB* ServerSilo;
  /* 0x06c8 */ unsigned char SignatureLevel;
  /* 0x06c9 */ unsigned char SectionSignatureLevel;
  /* 0x06ca */ struct _PS_PROTECTION Protection;
  struct /* bitfield */
  {
    /* 0x06cb */ unsigned char HangCount : 3; /* bit position: 0 */
    /* 0x06cb */ unsigned char GhostCount : 3; /* bit position: 3 */
    /* 0x06cb */ unsigned char PrefilterException : 1; /* bit position: 6 */
  }; /* bitfield */
  union
  {
    /* 0x06cc */ unsigned long Flags3;
    struct /* bitfield */
    {
      /* 0x06cc */ unsigned long Minimal : 1; /* bit position: 0 */
      /* 0x06cc */ unsigned long ReplacingPageRoot : 1; /* bit position: 1 */
      /* 0x06cc */ unsigned long Crashed : 1; /* bit position: 2 */
      /* 0x06cc */ unsigned long JobVadsAreTracked : 1; /* bit position: 3 */
      /* 0x06cc */ unsigned long VadTrackingDisabled : 1; /* bit position: 4 */
      /* 0x06cc */ unsigned long AuxiliaryProcess : 1; /* bit position: 5 */
      /* 0x06cc */ unsigned long SubsystemProcess : 1; /* bit position: 6 */
      /* 0x06cc */ unsigned long IndirectCpuSets : 1; /* bit position: 7 */
      /* 0x06cc */ unsigned long RelinquishedCommit : 1; /* bit position: 8 */
      /* 0x06cc */ unsigned long HighGraphicsPriority : 1; /* bit position: 9 */
      /* 0x06cc */ unsigned long CommitFailLogged : 1; /* bit position: 10 */
      /* 0x06cc */ unsigned long ReserveFailLogged : 1; /* bit position: 11 */
      /* 0x06cc */ unsigned long SystemProcess : 1; /* bit position: 12 */
      /* 0x06cc */ unsigned long HideImageBaseAddresses : 1; /* bit position: 13 */
      /* 0x06cc */ unsigned long AddressPolicyFrozen : 1; /* bit position: 14 */
      /* 0x06cc */ unsigned long ProcessFirstResume : 1; /* bit position: 15 */
      /* 0x06cc */ unsigned long ForegroundExternal : 1; /* bit position: 16 */
      /* 0x06cc */ unsigned long ForegroundSystem : 1; /* bit position: 17 */
      /* 0x06cc */ unsigned long HighMemoryPriority : 1; /* bit position: 18 */
      /* 0x06cc */ unsigned long EnableProcessSuspendResumeLogging : 1; /* bit position: 19 */
      /* 0x06cc */ unsigned long EnableThreadSuspendResumeLogging : 1; /* bit position: 20 */
      /* 0x06cc */ unsigned long SecurityDomainChanged : 1; /* bit position: 21 */
      /* 0x06cc */ unsigned long SecurityFreezeComplete : 1; /* bit position: 22 */
      /* 0x06cc */ unsigned long VmProcessorHost : 1; /* bit position: 23 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x06d0 */ long DeviceAsid;
  /* 0x06d8 */ void* SvmData;
  /* 0x06e0 */ struct _EX_PUSH_LOCK SvmProcessLock;
  /* 0x06e8 */ unsigned __int64 SvmLock;
  /* 0x06f0 */ struct _LIST_ENTRY SvmProcessDeviceListHead;
  /* 0x0700 */ unsigned __int64 LastFreezeInterruptTime;
  /* 0x0708 */ struct _PROCESS_DISK_COUNTERS* DiskCounters;
  /* 0x0710 */ void* PicoContext;
  /* 0x0718 */ void* EnclaveTable;
  /* 0x0720 */ unsigned __int64 EnclaveNumber;
  /* 0x0728 */ struct _EX_PUSH_LOCK EnclaveLock;
  /* 0x0730 */ unsigned long HighPriorityFaultsAllowed;
  /* 0x0738 */ struct _PO_PROCESS_ENERGY_CONTEXT* EnergyContext;
  /* 0x0740 */ void* VmContext;
  /* 0x0748 */ unsigned __int64 SequenceNumber;
  /* 0x0750 */ unsigned __int64 CreateInterruptTime;
  /* 0x0758 */ unsigned __int64 CreateUnbiasedInterruptTime;
  /* 0x0760 */ unsigned __int64 TotalUnbiasedFrozenTime;
  /* 0x0768 */ unsigned __int64 LastAppStateUpdateTime;
  struct /* bitfield */
  {
    /* 0x0770 */ unsigned __int64 LastAppStateUptime : 61; /* bit position: 0 */
    /* 0x0770 */ unsigned __int64 LastAppState : 3; /* bit position: 61 */
  }; /* bitfield */
  /* 0x0778 */ volatile unsigned __int64 SharedCommitCharge;
  /* 0x0780 */ struct _EX_PUSH_LOCK SharedCommitLock;
  /* 0x0788 */ struct _LIST_ENTRY SharedCommitLinks;
  union
  {
    struct
    {
      /* 0x0798 */ unsigned __int64 AllowedCpuSets;
      /* 0x07a0 */ unsigned __int64 DefaultCpuSets;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0798 */ unsigned __int64* AllowedCpuSetsIndirect;
      /* 0x07a0 */ unsigned __int64* DefaultCpuSetsIndirect;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x07a8 */ void* DiskIoAttribution;
  /* 0x07b0 */ void* DxgProcess;
  /* 0x07b8 */ unsigned long Win32KFilterSet;
  /* 0x07c0 */ volatile union _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;
  /* 0x07c8 */ volatile unsigned long KTimerSets;
  /* 0x07cc */ volatile unsigned long KTimer2Sets;
  /* 0x07d0 */ volatile unsigned long ThreadTimerSets;
  /* 0x07d8 */ unsigned __int64 VirtualTimerListLock;
  /* 0x07e0 */ struct _LIST_ENTRY VirtualTimerListHead;
  union
  {
    /* 0x07f0 */ struct _WNF_STATE_NAME WakeChannel;
    /* 0x07f0 */ struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;
  }; /* size: 0x0030 */
  union
  {
    /* 0x0820 */ unsigned long MitigationFlags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0820 */ unsigned long ControlFlowGuardEnabled : 1; /* bit position: 0 */
        /* 0x0820 */ unsigned long ControlFlowGuardExportSuppressionEnabled : 1; /* bit position: 1 */
        /* 0x0820 */ unsigned long ControlFlowGuardStrict : 1; /* bit position: 2 */
        /* 0x0820 */ unsigned long DisallowStrippedImages : 1; /* bit position: 3 */
        /* 0x0820 */ unsigned long ForceRelocateImages : 1; /* bit position: 4 */
        /* 0x0820 */ unsigned long HighEntropyASLREnabled : 1; /* bit position: 5 */
        /* 0x0820 */ unsigned long StackRandomizationDisabled : 1; /* bit position: 6 */
        /* 0x0820 */ unsigned long ExtensionPointDisable : 1; /* bit position: 7 */
        /* 0x0820 */ unsigned long DisableDynamicCode : 1; /* bit position: 8 */
        /* 0x0820 */ unsigned long DisableDynamicCodeAllowOptOut : 1; /* bit position: 9 */
        /* 0x0820 */ unsigned long DisableDynamicCodeAllowRemoteDowngrade : 1; /* bit position: 10 */
        /* 0x0820 */ unsigned long AuditDisableDynamicCode : 1; /* bit position: 11 */
        /* 0x0820 */ unsigned long DisallowWin32kSystemCalls : 1; /* bit position: 12 */
        /* 0x0820 */ unsigned long AuditDisallowWin32kSystemCalls : 1; /* bit position: 13 */
        /* 0x0820 */ unsigned long EnableFilteredWin32kAPIs : 1; /* bit position: 14 */
        /* 0x0820 */ unsigned long AuditFilteredWin32kAPIs : 1; /* bit position: 15 */
        /* 0x0820 */ unsigned long DisableNonSystemFonts : 1; /* bit position: 16 */
        /* 0x0820 */ unsigned long AuditNonSystemFontLoading : 1; /* bit position: 17 */
        /* 0x0820 */ unsigned long PreferSystem32Images : 1; /* bit position: 18 */
        /* 0x0820 */ unsigned long ProhibitRemoteImageMap : 1; /* bit position: 19 */
        /* 0x0820 */ unsigned long AuditProhibitRemoteImageMap : 1; /* bit position: 20 */
        /* 0x0820 */ unsigned long ProhibitLowILImageMap : 1; /* bit position: 21 */
        /* 0x0820 */ unsigned long AuditProhibitLowILImageMap : 1; /* bit position: 22 */
        /* 0x0820 */ unsigned long SignatureMitigationOptIn : 1; /* bit position: 23 */
        /* 0x0820 */ unsigned long AuditBlockNonMicrosoftBinaries : 1; /* bit position: 24 */
        /* 0x0820 */ unsigned long AuditBlockNonMicrosoftBinariesAllowStore : 1; /* bit position: 25 */
        /* 0x0820 */ unsigned long LoaderIntegrityContinuityEnabled : 1; /* bit position: 26 */
        /* 0x0820 */ unsigned long AuditLoaderIntegrityContinuity : 1; /* bit position: 27 */
        /* 0x0820 */ unsigned long EnableModuleTamperingProtection : 1; /* bit position: 28 */
        /* 0x0820 */ unsigned long EnableModuleTamperingProtectionNoInherit : 1; /* bit position: 29 */
        /* 0x0820 */ unsigned long RestrictIndirectBranchPrediction : 1; /* bit position: 30 */
        /* 0x0820 */ unsigned long IsolateSecurityDomain : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ MitigationFlagsValues;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0824 */ unsigned long MitigationFlags2;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0824 */ unsigned long EnableExportAddressFilter : 1; /* bit position: 0 */
        /* 0x0824 */ unsigned long AuditExportAddressFilter : 1; /* bit position: 1 */
        /* 0x0824 */ unsigned long EnableExportAddressFilterPlus : 1; /* bit position: 2 */
        /* 0x0824 */ unsigned long AuditExportAddressFilterPlus : 1; /* bit position: 3 */
        /* 0x0824 */ unsigned long EnableRopStackPivot : 1; /* bit position: 4 */
        /* 0x0824 */ unsigned long AuditRopStackPivot : 1; /* bit position: 5 */
        /* 0x0824 */ unsigned long EnableRopCallerCheck : 1; /* bit position: 6 */
        /* 0x0824 */ unsigned long AuditRopCallerCheck : 1; /* bit position: 7 */
        /* 0x0824 */ unsigned long EnableRopSimExec : 1; /* bit position: 8 */
        /* 0x0824 */ unsigned long AuditRopSimExec : 1; /* bit position: 9 */
        /* 0x0824 */ unsigned long EnableImportAddressFilter : 1; /* bit position: 10 */
        /* 0x0824 */ unsigned long AuditImportAddressFilter : 1; /* bit position: 11 */
        /* 0x0824 */ unsigned long DisablePageCombine : 1; /* bit position: 12 */
        /* 0x0824 */ unsigned long SpeculativeStoreBypassDisable : 1; /* bit position: 13 */
        /* 0x0824 */ unsigned long CetShadowStacks : 1; /* bit position: 14 */
      }; /* bitfield */
    } /* size: 0x0004 */ MitigationFlags2Values;
  }; /* size: 0x0004 */
  /* 0x0828 */ void* PartitionObject;
  /* 0x0830 */ unsigned __int64 SecurityDomain;
  /* 0x0838 */ unsigned __int64 ParentSecurityDomain;
  /* 0x0840 */ void* CoverageSamplerContext;
  /* 0x0848 */ void* MmHotPatchContext;
} EPROCESS, *PEPROCESS; /* size: 0x0850 */

