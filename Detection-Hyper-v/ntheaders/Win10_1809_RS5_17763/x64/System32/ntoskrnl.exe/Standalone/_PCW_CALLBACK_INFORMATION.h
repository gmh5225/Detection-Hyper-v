typedef struct _PCW_COUNTER_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CounterMask;
  /* 0x0008 */ const struct _UNICODE_STRING* InstanceMask;
} PCW_COUNTER_INFORMATION, *PPCW_COUNTER_INFORMATION; /* size: 0x0010 */

typedef struct _PCW_MASK_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CounterMask;
  /* 0x0008 */ const struct _UNICODE_STRING* InstanceMask;
  /* 0x0010 */ unsigned long InstanceId;
  /* 0x0014 */ unsigned char CollectMultiple;
  /* 0x0018 */ struct _PCW_BUFFER* Buffer;
  /* 0x0020 */ struct _KEVENT* CancelEvent;
} PCW_MASK_INFORMATION, *PPCW_MASK_INFORMATION; /* size: 0x0028 */

typedef union _PCW_CALLBACK_INFORMATION
{
  union
  {
    /* 0x0000 */ struct _PCW_COUNTER_INFORMATION AddCounter;
    /* 0x0000 */ struct _PCW_COUNTER_INFORMATION RemoveCounter;
    /* 0x0000 */ struct _PCW_MASK_INFORMATION EnumerateInstances;
    /* 0x0000 */ struct _PCW_MASK_INFORMATION CollectData;
  }; /* size: 0x0028 */
} PCW_CALLBACK_INFORMATION, *PPCW_CALLBACK_INFORMATION; /* size: 0x0028 */

