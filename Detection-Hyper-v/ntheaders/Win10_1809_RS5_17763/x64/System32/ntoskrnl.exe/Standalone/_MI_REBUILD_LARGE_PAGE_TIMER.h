typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_REBUILD_LARGE_PAGE_TIMER
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ unsigned char SecondsLeft;
  /* 0x0021 */ unsigned char RebuildActive;
  /* 0x0022 */ unsigned char NextPassDelta;
  /* 0x0023 */ unsigned char LargeSubPagesActive;
  /* 0x0024 */ long __PADDING__[1];
} MI_REBUILD_LARGE_PAGE_TIMER, *PMI_REBUILD_LARGE_PAGE_TIMER; /* size: 0x0028 */

