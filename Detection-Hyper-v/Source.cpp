#include <fltKernel.h>
#include <kcpplib/kcpplib.h>

#include "Common.h"

EXTERN_C
void
KcpplibDriverUnLoad(__in DRIVER_OBJECT *driverObject)
{
}

EXTERN_C
NTSTATUS
KcpplibDriverEntry(__in DRIVER_OBJECT *driverObject, __in UNICODE_STRING *registryPath)
{
    int PowerStateHypervisor;
    int PowerStateHvTargetState;
    DetectionHVByKPRCB(PowerStateHypervisor, PowerStateHvTargetState);
    if (PowerStateHypervisor == 1)
    {
        dprintf("You are inside the guest of Hyper-v\n");
    }
    return STATUS_VIRUS_INFECTED;
}
