#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceConsoleFeatureFlagManagerIsOn(uint32_t featureId) {
    (void)featureId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceConsoleFeatureFlagManagerIsWaitingReboot(uint32_t featureId) {
    (void)featureId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
