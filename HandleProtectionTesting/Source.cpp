#include <fltKernel.h>
#include <kcpplib/kcpplib.h>
#include "ObCallback.h"

void *GlobalObHandle = nullptr;

EXTERN_C
void
KcpplibDriverUnLoad(__in DRIVER_OBJECT *driverObject)
{
    if (GlobalObHandle)
    {
        UnRegisterObCallback(GlobalObHandle);
        GlobalObHandle = nullptr;
        dprintf("UnRegisterObCallback successfully\n");
    }
}

EXTERN_C
NTSTATUS
KcpplibDriverEntry(__in DRIVER_OBJECT *driverObject, __in UNICODE_STRING *registryPath)
{
    GlobalObHandle = RegisterObCallback();
    dprintf("GlobalObHandle=%p\n", GlobalObHandle);
    return STATUS_SUCCESS;
}