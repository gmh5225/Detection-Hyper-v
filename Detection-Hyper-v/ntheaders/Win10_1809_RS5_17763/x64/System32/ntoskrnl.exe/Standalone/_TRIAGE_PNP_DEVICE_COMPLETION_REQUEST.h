typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _TRIAGE_DEVICE_NODE* DeviceNode;
} TRIAGE_PNP_DEVICE_COMPLETION_REQUEST, *PTRIAGE_PNP_DEVICE_COMPLETION_REQUEST; /* size: 0x0018 */

