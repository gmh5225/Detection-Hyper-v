typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned __int64 CommitLimitBytes;
  /* 0x0008 */ unsigned __int64 CommitLimitFailureCode;
  /* 0x0010 */ unsigned __int64 MaxAllocationSizeBytes;
  /* 0x0018 */ unsigned __int64 AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0020 */

typedef struct _RTLP_HP_HEAP_GLOBALS
{
  /* 0x0000 */ unsigned __int64 HeapKey;
  /* 0x0008 */ unsigned __int64 LfhKey;
  /* 0x0010 */ struct _HEAP_FAILURE_INFORMATION* FailureInfo;
  /* 0x0018 */ struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
} RTLP_HP_HEAP_GLOBALS, *PRTLP_HP_HEAP_GLOBALS; /* size: 0x0038 */

