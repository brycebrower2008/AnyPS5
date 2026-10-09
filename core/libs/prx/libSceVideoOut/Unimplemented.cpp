#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"
#include "prx/libSceVideoOut/include/Output.hpp"
#include <stdexcept>

extern "C" {

int APS5_VABI sceVideoOutSysAddVblankEvent(intptr_t eq, int handle, void* udata) {
    (void)eq;
    (void)handle;
    (void)udata;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVideoOutSetFlipMaster(int slaveHandle, int masterHandle) {
    (void)slaveHandle;
    (void)masterHandle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVideoOutClearFlipMaster(int slaveHandle) {
    (void)slaveHandle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

void APS5_VABI sceVideoOutAddBufferAttributeOption(void* attribute, uint64_t option) {
    (void)attribute;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
}

void APS5_VABI sceVideoOutRemoveBufferAttributeOption(void* attribute, uint64_t option) {
    (void)attribute;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
}

int APS5_VABI sceVideoOutSetAlphaControl(int handle, int globalAlphaMode, int globalAlphaValue, uint8_t* a2lut, void* option) {
    (void)handle;
    (void)globalAlphaMode;
    (void)globalAlphaValue;
    (void)a2lut;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVideoOutSetGlobalBlendSpace(int handle, uint32_t space, uint32_t option) {
    (void)handle;
    (void)space;
    (void)option;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVideoOutColorSpaceConversionSettingsSetSdrToHdrConversion_(void* p, float lumaScale, uint32_t option, uint32_t sizeOfSettings) {
    (void)p;
    (void)lumaScale;
    (void)option;
    (void)sizeOfSettings;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVideoOutColorSpaceConversionSettingsSetDefaultSdrToHdrConversion_(void* p, uint32_t sizeOfSettings) {
    (void)p;
    (void)sizeOfSettings;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVideoOutAdjustColorSpaceConversion_(int handle, void* pSettings, uint32_t sizeOfSettings) {
    (void)handle;
    (void)pSettings;
    (void)sizeOfSettings;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVideoOutAdjustColor_(int handle, const VideoOutColorSettings* settings, uint32_t settings_size) {
    if (settings_size < sizeof(VideoOutColorSettings)) throw std::runtime_error("sceVideoOutAdjustColor_: VIDEO_OUT_ERROR_INVALID_VALUE");
    return sceVideoOutAdjustColor(handle, settings);
}

int APS5_VABI sceVideoOutColorSettingsSetGamma_(VideoOutColorSettings* settings, float gamma, uint32_t settings_size) {
    if (settings_size < sizeof(VideoOutColorSettings)) throw std::runtime_error("sceVideoOutColorSettingsSetGamma_: VIDEO_OUT_ERROR_INVALID_VALUE");
    return sceVideoOutColorSettingsSetGamma(settings, gamma);
}

}
