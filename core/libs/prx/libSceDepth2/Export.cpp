#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceDepth2QueryMemory(void* initializeParameter, void* memoryQueryResult) {
    (void)initializeParameter;
    (void)memoryQueryResult;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceDepth2Initialize(void* initializeParameter, void* memoryInformation) {
    (void)initializeParameter;
    (void)memoryInformation;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceDepth2Terminate(int handle) {
    (void)handle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceDepth2SetCommand(int handle, void* parameter) {
    (void)handle;
    (void)parameter;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceDepth2Submit(int handle) {
    (void)handle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceDepth2WaitAndExecutePostProcess(int handle) {
    (void)handle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceDepth2SetRoi(int handle, float sx, float sy, float ex, float ey) {
    (void)handle;
    (void)sx;
    (void)sy;
    (void)ex;
    (void)ey;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceDepth2GetImage(int handle, int imageType, void* destinationBuffer, int destinationBufferSize) {
    (void)handle;
    (void)imageType;
    (void)destinationBuffer;
    (void)destinationBufferSize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
