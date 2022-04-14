typedef union _KALPC_DIRECT_EVENT
{
  union
  {
    /* 0x0000 */ unsigned __int64 Event;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Referenced : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Reserved : 63; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KALPC_DIRECT_EVENT, *PKALPC_DIRECT_EVENT; /* size: 0x0008 */

typedef struct _ALPC_WORK_ON_BEHALF_TICKET
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ unsigned long ThreadCreationTimeLow;
} ALPC_WORK_ON_BEHALF_TICKET, *PALPC_WORK_ON_BEHALF_TICKET; /* size: 0x0008 */

typedef struct _KALPC_WORK_ON_BEHALF_DATA
{
  /* 0x0000 */ struct _ALPC_WORK_ON_BEHALF_TICKET Ticket;
} KALPC_WORK_ON_BEHALF_DATA, *PKALPC_WORK_ON_BEHALF_DATA; /* size: 0x0008 */

typedef struct _KALPC_MESSAGE_ATTRIBUTES
{
  /* 0x0000 */ void* ClientContext;
  /* 0x0008 */ void* ServerContext;
  /* 0x0010 */ void* PortContext;
  /* 0x0018 */ void* CancelPortContext;
  /* 0x0020 */ struct _KALPC_SECURITY_DATA* SecurityData;
  /* 0x0028 */ struct _KALPC_VIEW* View;
  /* 0x0030 */ struct _KALPC_HANDLE_DATA* HandleData;
  /* 0x0038 */ union _KALPC_DIRECT_EVENT DirectEvent;
  /* 0x0040 */ struct _KALPC_WORK_ON_BEHALF_DATA WorkOnBehalfData;
} KALPC_MESSAGE_ATTRIBUTES, *PKALPC_MESSAGE_ATTRIBUTES; /* size: 0x0048 */

