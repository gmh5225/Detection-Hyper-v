typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_CRITICAL_SECTION_DEBUG
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned short CreatorBackTraceIndex;
  /* 0x0008 */ struct _RTL_CRITICAL_SECTION* CriticalSection;
  /* 0x0010 */ struct _LIST_ENTRY ProcessLocksList;
  /* 0x0020 */ unsigned long EntryCount;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned short CreatorBackTraceIndexHigh;
  /* 0x002e */ unsigned short SpareUSHORT;
} RTL_CRITICAL_SECTION_DEBUG, *PRTL_CRITICAL_SECTION_DEBUG; /* size: 0x0030 */

