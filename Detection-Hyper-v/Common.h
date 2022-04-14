#pragma once

namespace build_17763 {
// Win10_1809_RS5_17763

// X64 10.0.17763.1
#include "ntheaders\Win10_1809_RS5_17763\x64\System32\ntoskrnl.exe\ALL.h"

} // namespace build_17763

namespace build_22000 {
// Win11_XXXX_22000

// X64 10.0.22000.593
#include "ntheaders\Win11_XXXX_22000\x64\System32\ntoskrnl.exe\ntoskrnl.exe\ALL.h"

} // namespace build_22000

void
DetectionHVByKPRCB(int &PowerStateHypervisor, int &PowerStateHvTargetState);
