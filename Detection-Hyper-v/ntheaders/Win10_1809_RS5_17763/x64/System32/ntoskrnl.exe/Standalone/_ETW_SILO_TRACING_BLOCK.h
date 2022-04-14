typedef struct _ETW_SILO_TRACING_BLOCK
{
  /* 0x0000 */ struct _EX_FAST_REF* ProcessorBuffers;
  /* 0x0008 */ unsigned __int64* EventsLoggedCount;
  /* 0x0010 */ __int64* volatile QpcDelta;
  /* 0x0018 */ long __PADDING__[10];
} ETW_SILO_TRACING_BLOCK, *PETW_SILO_TRACING_BLOCK; /* size: 0x0040 */

