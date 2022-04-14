typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef struct _PI_BUS_EXTENSION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char NumberCSNs;
  /* 0x0008 */ unsigned char* ReadDataPort;
  /* 0x0010 */ unsigned char DataPortMapped;
  /* 0x0018 */ unsigned char* AddressPort;
  /* 0x0020 */ unsigned char AddrPortMapped;
  /* 0x0028 */ unsigned char* CommandPort;
  /* 0x0030 */ unsigned char CmdPortMapped;
  /* 0x0034 */ unsigned long NextSlotNumber;
  /* 0x0038 */ struct _SINGLE_LIST_ENTRY DeviceList;
  /* 0x0040 */ struct _SINGLE_LIST_ENTRY CardList;
  /* 0x0048 */ struct _DEVICE_OBJECT* PhysicalBusDevice;
  /* 0x0050 */ struct _DEVICE_OBJECT* FunctionalBusDevice;
  /* 0x0058 */ struct _DEVICE_OBJECT* AttachedDevice;
  /* 0x0060 */ unsigned long BusNumber;
  /* 0x0064 */ enum _SYSTEM_POWER_STATE SystemPowerState;
  /* 0x0068 */ enum _DEVICE_POWER_STATE DevicePowerState;
  /* 0x006c */ long __PADDING__[1];
} PI_BUS_EXTENSION, *PPI_BUS_EXTENSION; /* size: 0x0070 */

