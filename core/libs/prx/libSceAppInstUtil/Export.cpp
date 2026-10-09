#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceAppInstUtilInitialize(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAppInstUtilTerminate(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAppInstUtilAppUnInstall(uint8_t* titleId) {
    (void)titleId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallAll(void* reserved) {
    (void)reserved;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallTitleDir(uint8_t* titleId, uint8_t* titleDir, void* reserved) {
    (void)titleId;
    (void)titleDir;
    (void)reserved;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAppInstUtilAppExists(uint8_t* titleId, int* pExists) {
    (void)titleId;
    (void)pExists;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAppInstUtilAppIsInInstalling(int* pInInstalling) {
    (void)pInInstalling;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
