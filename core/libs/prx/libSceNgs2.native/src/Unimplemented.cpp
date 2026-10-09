#include <cstddef>
#include <cstdint>

#include "prx/libc/include/General.hpp"
#include "prx/libSceNgs2.native/include/Ngs2Types.hpp"

#pragma GCC visibility push(default)

extern "C" {

int APS5_VABI sceNgs2GeomApply(const Ngs2GeomListenerWork* listener, const Ngs2GeomSourceParam* source, Ngs2GeomAttribute* out_attrib, uint32_t flags) {
    (void)listener;
    (void)source;
    (void)out_attrib;
    (void)flags;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2GeomCalcListener(const Ngs2GeomListenerParam* param, Ngs2GeomListenerWork* out_work, uint32_t flags) {
    (void)param;
    (void)out_work;
    (void)flags;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2GeomResetListenerParam(Ngs2GeomListenerParam* out_listener_param) {
    (void)out_listener_param;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2GeomResetSourceParam(Ngs2GeomSourceParam* out_source_param) {
    (void)out_source_param;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2PanGetVolumeMatrix(Ngs2PanWork* work, const Ngs2PanParam* params, uint32_t num_params, uint32_t matrix_format, float* out_volume_matrix) {
    (void)work;
    (void)params;
    (void)num_params;
    (void)matrix_format;
    (void)out_volume_matrix;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2PanInit(Ngs2PanWork* work, const float* speaker_angles, float unit_angle, uint32_t num_speakers) {
    (void)work;
    (void)speaker_angles;
    (void)unit_angle;
    (void)num_speakers;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2SystemEnumHandles(size_t* outHandles, uint32_t maxHandles) {
    (void)outHandles;
    (void)maxHandles;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2SystemRunCommands(size_t systemHandle, void* paramsValue, size_t numParams) {
    (void)systemHandle;
    (void)paramsValue;
    (void)numParams;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2SystemQueryInfo(size_t systemHandle, uint32_t queryId, void* outInfo, size_t infoSize) {
    (void)systemHandle;
    (void)queryId;
    (void)outInfo;
    (void)infoSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2SystemEnumRackHandles(size_t systemHandle, size_t* aOutHandle, uint32_t maxHandles) {
    (void)systemHandle;
    (void)aOutHandle;
    (void)maxHandles;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2RackRunCommands(size_t rackHandle, void* paramsValue, size_t numParams) {
    (void)rackHandle;
    (void)paramsValue;
    (void)numParams;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2RackQueryInfo(size_t rackHandle, uint32_t queryId, void* outInfo, size_t infoSize) {
    (void)rackHandle;
    (void)queryId;
    (void)outInfo;
    (void)infoSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2VoiceGetMatrixInfo(size_t voiceHandle, uint32_t matrixId, void* outInfo, size_t infoSize) {
    (void)voiceHandle;
    (void)matrixId;
    (void)outInfo;
    (void)infoSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2StreamResetOption(void* outOption) {
    (void)outOption;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2StreamQueryBufferSize(void* option, void* outBuffer) {
    (void)option;
    (void)outBuffer;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2StreamCreate(size_t systemHandle, void* option, void* buffer, size_t* outStreamHandle) {
    (void)systemHandle;
    (void)option;
    (void)buffer;
    (void)outStreamHandle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2StreamCreateWithAllocator(size_t systemHandle, void* option, void* allocator, size_t* outStreamHandle) {
    (void)systemHandle;
    (void)option;
    (void)allocator;
    (void)outStreamHandle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2StreamDestroy(size_t streamHandle, void* outBuffer) {
    (void)streamHandle;
    (void)outBuffer;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2StreamRunCommands(size_t streamHandle, void* paramsValue, size_t numParams) {
    (void)streamHandle;
    (void)paramsValue;
    (void)numParams;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2StreamQueryInfo(size_t streamHandle, uint32_t queryId, void* outInfo, size_t infoSize) {
    (void)streamHandle;
    (void)queryId;
    (void)outInfo;
    (void)infoSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2ParseWaveformUser(intptr_t handler, size_t userData, void* outInfo) {
    (void)handler;
    (void)userData;
    (void)outInfo;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2GetWaveformFrameInfo(void* format, uint32_t* outFrameSize, uint32_t* outNumFrameSamples, uint32_t* outUnitsPerFrame, uint32_t* outNumDelaySamples) {
    (void)format;
    (void)outFrameSize;
    (void)outNumFrameSamples;
    (void)outUnitsPerFrame;
    (void)outNumDelaySamples;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2JobSchedulerResetOption(void* outOption) {
    (void)outOption;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2ReportRegisterHandler(uint32_t reportType, intptr_t handler, size_t userData, size_t* outHandle) {
    (void)reportType;
    (void)handler;
    (void)userData;
    (void)outHandle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2ReportUnregisterHandler(size_t reportHandle) {
    (void)reportHandle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNgs2CustomRackGetModuleInfo(size_t rackHandle, uint32_t moduleIndex, void* outInfo, size_t infoSize) {
    (void)rackHandle;
    (void)moduleIndex;
    (void)outInfo;
    (void)infoSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}

#pragma GCC visibility pop
