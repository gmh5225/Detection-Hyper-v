typedef struct _X86_KTRAP_FRAME
{
  /* 0x0000 */ unsigned long DbgEbp;
  /* 0x0004 */ unsigned long DbgEip;
  /* 0x0008 */ unsigned long DbgArgMark;
  /* 0x000c */ unsigned long DbgArgPointer;
  /* 0x0010 */ unsigned long TempSegCs;
  /* 0x0014 */ unsigned long TempEsp;
  /* 0x0018 */ unsigned long Dr0;
  /* 0x001c */ unsigned long Dr1;
  /* 0x0020 */ unsigned long Dr2;
  /* 0x0024 */ unsigned long Dr3;
  /* 0x0028 */ unsigned long Dr6;
  /* 0x002c */ unsigned long Dr7;
  /* 0x0030 */ unsigned long SegGs;
  /* 0x0034 */ unsigned long SegEs;
  /* 0x0038 */ unsigned long SegDs;
  /* 0x003c */ unsigned long Edx;
  /* 0x0040 */ unsigned long Ecx;
  /* 0x0044 */ unsigned long Eax;
  /* 0x0048 */ unsigned char PreviousPreviousMode;
  /* 0x0049 */ unsigned char EntropyQueueDpc;
  /* 0x004a */ unsigned char Reserved[2];
  /* 0x004c */ unsigned long ExceptionList;
  /* 0x0050 */ unsigned long SegFs;
  /* 0x0054 */ unsigned long Edi;
  /* 0x0058 */ unsigned long Esi;
  /* 0x005c */ unsigned long Ebx;
  /* 0x0060 */ unsigned long Ebp;
  /* 0x0064 */ unsigned long ErrCode;
  /* 0x0068 */ unsigned long Eip;
  /* 0x006c */ unsigned long SegCs;
  /* 0x0070 */ unsigned long EFlags;
  /* 0x0074 */ unsigned long HardwareEsp;
  /* 0x0078 */ unsigned long HardwareSegSs;
  /* 0x007c */ unsigned long V86Es;
  /* 0x0080 */ unsigned long V86Ds;
  /* 0x0084 */ unsigned long V86Fs;
  /* 0x0088 */ unsigned long V86Gs;
} X86_KTRAP_FRAME, *PX86_KTRAP_FRAME; /* size: 0x008c */

