typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _DRIVER_EXTENSION
{
  /* 0x0000 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0008 */ void* AddDevice /* function */;
  /* 0x0010 */ unsigned long Count;
  /* 0x0018 */ struct _UNICODE_STRING ServiceKeyName;
  /* 0x0028 */ struct _IO_CLIENT_EXTENSION* ClientDriverExtension;
  /* 0x0030 */ struct _FS_FILTER_CALLBACKS* FsFilterCallbacks;
  /* 0x0038 */ void* KseCallbacks;
  /* 0x0040 */ void* DvCallbacks;
  /* 0x0048 */ void* VerifierContext;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION; /* size: 0x0050 */

