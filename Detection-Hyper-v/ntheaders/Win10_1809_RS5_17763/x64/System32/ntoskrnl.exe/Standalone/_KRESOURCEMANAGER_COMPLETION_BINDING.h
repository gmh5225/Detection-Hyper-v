typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KRESOURCEMANAGER_COMPLETION_BINDING
{
  /* 0x0000 */ struct _LIST_ENTRY NotificationListHead;
  /* 0x0010 */ void* Port;
  /* 0x0018 */ unsigned __int64 Key;
  /* 0x0020 */ struct _EPROCESS* BindingProcess;
} KRESOURCEMANAGER_COMPLETION_BINDING, *PKRESOURCEMANAGER_COMPLETION_BINDING; /* size: 0x0028 */

