typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ unsigned __int64 State : 2; /* bit position: 0 */
  }; /* size: 0x0008 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0008 */

typedef struct _RTLP_HP_METADATA_HEAP_CTX
{
  /* 0x0000 */ struct _SEGMENT_HEAP* Heap;
  /* 0x0008 */ union _RTL_RUN_ONCE InitOnce;
} RTLP_HP_METADATA_HEAP_CTX, *PRTLP_HP_METADATA_HEAP_CTX; /* size: 0x0010 */

