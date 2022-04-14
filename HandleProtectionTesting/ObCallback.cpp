#include "ObCallback.h"
#include <kcpplib/kcpplib.h>

EXTERN_C
PCCHAR
NTAPI
PsGetProcessImageFileName(IN PEPROCESS Process);

#define PROTECT_NAME "123.exe"

OB_PREOP_CALLBACK_STATUS
PreOperationCallback(PVOID RegistrationContext, POB_PRE_OPERATION_INFORMATION OpInfo)
{
    UNREFERENCED_PARAMETER(RegistrationContext);
    ASSERT(OpInfo->CallContext == NULL);

    ACCESS_MASK BitsToClear = 0;
    ACCESS_MASK BitsToSet = 0;
    PACCESS_MASK DesiredAccess = NULL;

    if (OpInfo->ObjectType == *PsProcessType)
    {
        auto Obj = OpInfo->Object;
        auto ObjName = PsGetProcessImageFileName((PEPROCESS)Obj);
        if (!ObjName)
        {
            return OB_PREOP_SUCCESS;
        }

        if (strstr(ObjName, PROTECT_NAME) == 0)
        {
            // not our protected exe.
            return OB_PREOP_SUCCESS;
        }

        if (OpInfo->Object == PsGetCurrentProcess())
        {
            return OB_PREOP_SUCCESS;
        }

        BitsToClear = PROCESS_ALL_ACCESS;
        BitsToSet = DELETE;
    }
    else
        goto Exit;

    switch (OpInfo->Operation)
    {
    case OB_OPERATION_HANDLE_CREATE: {
        DesiredAccess = &OpInfo->Parameters->CreateHandleInformation.DesiredAccess;
        break;
    }
    case OB_OPERATION_HANDLE_DUPLICATE: {
        DesiredAccess = &OpInfo->Parameters->DuplicateHandleInformation.DesiredAccess;
        break;
    }
    default:
        ASSERT(FALSE);
        break;
    }

    if (OpInfo->KernelHandle != 1)
    {
        *DesiredAccess &= ~BitsToClear;
        *DesiredAccess |= BitsToSet;
    }

Exit:
    return OB_PREOP_SUCCESS;
}

void *
RegisterObCallback()
{
    OB_OPERATION_REGISTRATION OperationRegistration;
    OB_CALLBACK_REGISTRATION CallbackRegistration;

    RtlSecureZeroMemory(&OperationRegistration, sizeof(OB_OPERATION_REGISTRATION));
    RtlSecureZeroMemory(&CallbackRegistration, sizeof(OB_CALLBACK_REGISTRATION));

    UNICODE_STRING callbackAltitude;
    RtlInitUnicodeString(&callbackAltitude, L"2004");

    OperationRegistration.ObjectType = PsProcessType;
    OperationRegistration.Operations |= OB_OPERATION_HANDLE_CREATE;
    OperationRegistration.Operations |= OB_OPERATION_HANDLE_DUPLICATE;
    OperationRegistration.PreOperation = PreOperationCallback;
    OperationRegistration.PostOperation = NULL;

    CallbackRegistration.Version = OB_FLT_REGISTRATION_VERSION;
    CallbackRegistration.Altitude = callbackAltitude;
    CallbackRegistration.OperationRegistrationCount = 1;
    CallbackRegistration.RegistrationContext = NULL;
    CallbackRegistration.OperationRegistration = &OperationRegistration;

    void *ObRegistrationHandle = nullptr;
    auto ns = ObRegisterCallbacks(&CallbackRegistration, &ObRegistrationHandle);
    if (ns >= 0)
    {
        return ObRegistrationHandle;
    }

    return nullptr;
}

void
UnRegisterObCallback(void *ObHandle)
{
    if (ObHandle)
    {
        ObUnRegisterCallbacks(ObHandle);
    }
}
