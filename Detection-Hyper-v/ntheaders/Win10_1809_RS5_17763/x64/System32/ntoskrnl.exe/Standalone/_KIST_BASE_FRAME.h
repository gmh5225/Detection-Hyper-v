typedef struct _KIST_BASE_FRAME
{
  /* 0x0000 */ struct _KPCR* KernelGsBase;
  /* 0x0008 */ struct _KIST_LINK_FRAME* IstStack;
  /* 0x0010 */ unsigned __int64 PreviousGsBase;
  /* 0x0018 */ unsigned __int64 PreviousCr3;
} KIST_BASE_FRAME, *PKIST_BASE_FRAME; /* size: 0x0020 */

