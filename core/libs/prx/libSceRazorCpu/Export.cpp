#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

uint32_t APS5_VABI sceRazorCpuIsCapturing(void) {
 return 0;
}

int APS5_VABI sceRazorCpuJobManagerDispatch(const void* args) {
 (void)args;
 return 0;
}

int APS5_VABI sceRazorCpuJobManagerJob(const void* args) {
 (void)args;
 return 0;
}

int APS5_VABI sceRazorCpuJobManagerSequence(const void* args) {
 (void)args;
 return 0;
}

int APS5_VABI sceRazorCpuPushMarkerStatic(const char* name, uint32_t color, uint32_t flags) {
 (void)name;
 (void)color;
 (void)flags;
 return 0;
}

int APS5_VABI sceRazorCpuPopMarker(void) {
 return 0;
}

int APS5_VABI sceRazorCpuFlushOccurred(uint64_t* timeSpentInFlush) {
 if (timeSpentInFlush != nullptr) *timeSpentInFlush = 0;
 return 0;
}

int APS5_VABI sceRazorCpuPlotValue(const char* series, float value) {
 (void)series;
 (void)value;
 return 0;
}

int APS5_VABI sceRazorCpuWriteBookmark(const char* label, const char* description) {
 (void)label;
 (void)description;
 return 0;
}

void APS5_VABI sceRazorCpuDisableFiberUserMarkers(void) {
    NotImplemented_nid_no_patch(__func__);
}

int APS5_VABI sceRazorCpuPushMarker(uint8_t* label, uint32_t color, uint32_t flags) {
    (void)label;
    (void)color;
    (void)flags;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuSync(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuInitDataTags(void* pBuffer, size_t uSize) {
    (void)pBuffer;
    (void)uSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuShutdownDataTags(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

size_t APS5_VABI sceRazorCpuGetDataTagStorageSize(uint32_t uTagCount) {
    (void)uTagCount;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuTagArray(uint8_t* label, uint32_t uCategory, void* pArray, size_t uBufferSize, size_t uElementSize) {
    (void)label;
    (void)uCategory;
    (void)pArray;
    (void)uBufferSize;
    (void)uElementSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuTagBuffer(uint8_t* label, uint32_t uCategory, void* pBuffer, size_t uBufferSize) {
    (void)label;
    (void)uCategory;
    (void)pBuffer;
    (void)uBufferSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuResizeTaggedBuffer(uint32_t uCategory, void* pBuffer, size_t uNewBufferSize) {
    (void)uCategory;
    (void)pBuffer;
    (void)uNewBufferSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuUnTagBuffer(uint32_t uCategory, void* pBuffer) {
    (void)uCategory;
    (void)pBuffer;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuBeginLogicalFileAccess(uint8_t* pFilename, uint64_t uTag, uint64_t uSize, uint8_t operation) {
    (void)pFilename;
    (void)uTag;
    (void)uSize;
    (void)operation;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRazorCpuEndLogicalFileAccess(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
