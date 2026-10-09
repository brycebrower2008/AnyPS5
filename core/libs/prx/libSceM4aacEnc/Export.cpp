#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceM4aacEncCreateEncoder(int channels, int samplingRate, int bitRate, int inputFormat, int outputFormat, int* pInternalError) {
    (void)channels;
    (void)samplingRate;
    (void)bitRate;
    (void)inputFormat;
    (void)outputFormat;
    (void)pInternalError;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceM4aacEncDeleteEncoder(int m4aacEncHandle, int* pInternalError) {
    (void)m4aacEncHandle;
    (void)pInternalError;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceM4aacEncEncode(int m4aacEncHandle, void* pInput, uint32_t inputByte, void* pOutput, uint32_t* pOutputByte, int* pInternalError) {
    (void)m4aacEncHandle;
    (void)pInput;
    (void)inputByte;
    (void)pOutput;
    (void)pOutputByte;
    (void)pInternalError;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceM4aacEncFlush(int m4aacEncHandle, void* pOutput, uint32_t* pOutputByte, int* pInternalError) {
    (void)m4aacEncHandle;
    (void)pOutput;
    (void)pOutputByte;
    (void)pInternalError;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceM4aacEncClearContext(int m4aacEncHandle) {
    (void)m4aacEncHandle;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
