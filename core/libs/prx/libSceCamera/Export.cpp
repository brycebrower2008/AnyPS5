#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceCamera2Initialize(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2Finalize(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2Open(int userId, int type, int index, void* param) {
    (void)userId;
    (void)type;
    (void)index;
    (void)param;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2Close(int handle) {
    (void)handle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2SetConfig(int handle, void* config) {
    (void)handle;
    (void)config;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetConfig(int handle, void* config) {
    (void)handle;
    (void)config;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2Start(int handle, void* param) {
    (void)handle;
    (void)param;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2Stop(int handle) {
    (void)handle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetFrameData(int handle, void* frameData) {
    (void)handle;
    (void)frameData;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2IsValidFrameData(int handle, void* frameData) {
    (void)handle;
    (void)frameData;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2IsAttached(int index) {
    (void)index;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetAttribute(int handle, void* attribute) {
    (void)handle;
    (void)attribute;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2SetAttribute(int handle, void* attribute) {
    (void)handle;
    (void)attribute;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2SetAutoExposureGain(int handle, int channel, uint32_t enable, void* option) {
    (void)handle;
    (void)channel;
    (void)enable;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetAutoExposureGain(int handle, int channel, uint32_t* enable, void* option) {
    (void)handle;
    (void)channel;
    (void)enable;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2SetAutoWhiteBalance(int handle, int channel, uint32_t enable, void* option) {
    (void)handle;
    (void)channel;
    (void)enable;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetAutoWhiteBalance(int handle, int channel, uint32_t* enable, void* option) {
    (void)handle;
    (void)channel;
    (void)enable;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2SetExposureGain(int handle, int channel, void* exposureGain, void* option) {
    (void)handle;
    (void)channel;
    (void)exposureGain;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetExposureGain(int handle, int channel, void* exposureGain, void* option) {
    (void)handle;
    (void)channel;
    (void)exposureGain;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2SetWhiteBalance(int handle, int channel, void* whiteBalance, void* option) {
    (void)handle;
    (void)channel;
    (void)whiteBalance;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetWhiteBalance(int handle, int channel, void* whiteBalance, void* option) {
    (void)handle;
    (void)channel;
    (void)whiteBalance;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2SetVideoSync(int handle, void* videoSync) {
    (void)handle;
    (void)videoSync;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceCamera2GetFieldOfView(int handle, int imageArea, void* fieldOfView) {
    (void)handle;
    (void)imageArea;
    (void)fieldOfView;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
