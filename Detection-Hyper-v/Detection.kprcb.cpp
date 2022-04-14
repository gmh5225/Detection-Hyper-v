#include <fltKernel.h>
#include <kcpplib/kcpplib.h>

#include "Common.h"

void
DetectionHVByKPRCB(int &PowerStateHypervisor, int &PowerStateHvTargetState)
{
    auto PcrPtr = (build_17763::KPCR *)KeGetPcr();
    auto PrcbPtr = PcrPtr->CurrentPrcb;
    dprintf("PcrPtr=%p\n", PcrPtr);
    dprintf("PrcbPtr=%p\n", PrcbPtr);

    PowerStateHypervisor = PrcbPtr->PowerState.Hypervisor;
    dprintf("PowerStateHypervisor=%d\n", PowerStateHypervisor);

    PowerStateHvTargetState = PrcbPtr->PowerState.HvTargetState;
    dprintf("PowerStateHvTargetState=%d\n", PowerStateHvTargetState);
}
