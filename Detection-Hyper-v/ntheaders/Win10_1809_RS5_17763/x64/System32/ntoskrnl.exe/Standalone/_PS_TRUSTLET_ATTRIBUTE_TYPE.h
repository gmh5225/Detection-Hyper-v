typedef union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Trustlet : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Ntos : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char WriteHandle : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char ReadHandle : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char Reserved : 4; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AccessRights;
  }; /* size: 0x0001 */
} PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS, *PPS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS; /* size: 0x0001 */

typedef struct _PS_TRUSTLET_ATTRIBUTE_TYPE
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Version;
      /* 0x0001 */ unsigned char DataCount;
      /* 0x0002 */ unsigned char SemanticType;
      /* 0x0003 */ union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS AccessRights;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AttributeType;
  }; /* size: 0x0004 */
} PS_TRUSTLET_ATTRIBUTE_TYPE, *PPS_TRUSTLET_ATTRIBUTE_TYPE; /* size: 0x0004 */

