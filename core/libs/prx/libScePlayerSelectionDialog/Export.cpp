#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI scePlayerSelectionDialogTerminate(void) {
 return 0;
}

int APS5_VABI scePlayerSelectionDialogInitialize(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI scePlayerSelectionDialogOpen(void* param) {
    (void)param;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI scePlayerSelectionDialogUpdateStatus(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI scePlayerSelectionDialogGetStatus(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI scePlayerSelectionDialogGetResult(void* result) {
    (void)result;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI scePlayerSelectionDialogClose(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
