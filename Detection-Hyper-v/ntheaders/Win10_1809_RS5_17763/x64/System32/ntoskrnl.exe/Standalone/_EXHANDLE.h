typedef struct _EXHANDLE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long TagBits : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long Index : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ void* GenericHandleOverlay;
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EXHANDLE, *PEXHANDLE; /* size: 0x0008 */

