typedef union _WHEA_ERROR_PACKET_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved1 : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long PlatformPfaControl : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long PlatformDirectedOffline : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved2 : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS; /* size: 0x0004 */

