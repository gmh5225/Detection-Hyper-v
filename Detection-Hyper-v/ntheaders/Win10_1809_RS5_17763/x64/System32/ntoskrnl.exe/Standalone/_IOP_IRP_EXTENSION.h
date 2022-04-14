typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _IO_ADAPTER_CRYPTO_PARAMETERS
{
  /* 0x0000 */ unsigned __int64 Tweak;
  /* 0x0008 */ struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR* KeyDescriptor;
} IO_ADAPTER_CRYPTO_PARAMETERS, *PIO_ADAPTER_CRYPTO_PARAMETERS; /* size: 0x0010 */

typedef struct _IOP_IRP_EXTENSION
{
  union
  {
    /* 0x0000 */ unsigned short ExtensionFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short Allocated : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short PropagateId : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short SpareBits : 14; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned short TypesAllocated;
  /* 0x0004 */ unsigned char GenericExtension[4];
  /* 0x0008 */ void* VerifierContext;
  /* 0x0010 */ unsigned __int64 DiskIoAttributionHandle;
  /* 0x0018 */ struct _GUID ActivityId;
  union
  {
    /* 0x0028 */ union _LARGE_INTEGER Timestamp;
    /* 0x0028 */ unsigned long ZeroingOffset;
    struct
    {
      /* 0x0028 */ struct _IO_IRP_EXT_TRACK_OFFSET_HEADER* FsTrackOffsetBlob;
      /* 0x0030 */ __int64 FsTrackedOffset;
    }; /* size: 0x0010 */
    /* 0x0028 */ struct _IO_ADAPTER_CRYPTO_PARAMETERS AdapterCryptoParameters;
  }; /* size: 0x0010 */
} IOP_IRP_EXTENSION, *PIOP_IRP_EXTENSION; /* size: 0x0038 */

