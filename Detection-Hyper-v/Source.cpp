#include <fltKernel.h>
#include <kcpplib/kcpplib.h>

EXTERN_C
void
KcpplibDriverUnLoad(__in DRIVER_OBJECT *driverObject)
{
}

EXTERN_C
NTSTATUS
KcpplibDriverEntry(__in DRIVER_OBJECT *driverObject, __in UNICODE_STRING *registryPath)
{
    return STATUS_SUCCESS;
}
