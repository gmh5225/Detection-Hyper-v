typedef struct _CM_COMPONENT_HASH
{
  /* 0x0000 */ unsigned long Hash;
} CM_COMPONENT_HASH, *PCM_COMPONENT_HASH; /* size: 0x0004 */

typedef struct _CM_NAME_HASH
{
  /* 0x0000 */ struct _CM_COMPONENT_HASH ConvKey;
  /* 0x0008 */ struct _CM_NAME_HASH* NextHash;
  /* 0x0010 */ unsigned short NameLength;
  /* 0x0012 */ wchar_t Name[1];
  /* 0x0014 */ long __PADDING__[1];
} CM_NAME_HASH, *PCM_NAME_HASH; /* size: 0x0018 */

typedef struct _CM_NAME_CONTROL_BLOCK
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Compressed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long RefCount : 31; /* bit position: 1 */
  }; /* bitfield */
  union
  {
    /* 0x0008 */ struct _CM_NAME_HASH NameHash;
    struct
    {
      /* 0x0008 */ struct _CM_COMPONENT_HASH ConvKey;
      /* 0x0010 */ struct _CM_KEY_HASH* NextHash;
      /* 0x0018 */ unsigned short NameLength;
      /* 0x001a */ wchar_t Name[1];
      /* 0x001c */ long __PADDING__[1];
    }; /* size: 0x0014 */
  }; /* size: 0x0018 */
} CM_NAME_CONTROL_BLOCK, *PCM_NAME_CONTROL_BLOCK; /* size: 0x0020 */

