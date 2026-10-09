#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceAt9EncQueryMemSize(void* pAt9EncParam, int* pMemSize, int* pInternalResult) {
    (void)pAt9EncParam;
    (void)pMemSize;
    (void)pInternalResult;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAt9EncCreateEncoder(void* pAt9EncWorkArea, void* pAt9EncParam, int memSize, int* pInternalResult) {
    (void)pAt9EncWorkArea;
    (void)pAt9EncParam;
    (void)memSize;
    (void)pInternalResult;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAt9EncEncode(void* pAt9EncWorkArea, void* pInputBuf, void* pOutputBuf, uint32_t inputBufSize, uint32_t outputBufSize, uint32_t* pOutputDataByte, uint32_t* pUsedBufSize, int* pInternalResult) {
    (void)pAt9EncWorkArea;
    (void)pInputBuf;
    (void)pOutputBuf;
    (void)inputBufSize;
    (void)outputBufSize;
    (void)pOutputDataByte;
    (void)pUsedBufSize;
    (void)pInternalResult;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAt9EncFlush(void* pAt9EncWorkArea, void* pOutputBuf, uint32_t outputBufSize, uint32_t* pOutputDataByte, int* pInternalResult) {
    (void)pAt9EncWorkArea;
    (void)pOutputBuf;
    (void)outputBufSize;
    (void)pOutputDataByte;
    (void)pInternalResult;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAt9EncClearContext(void* pAt9EncWorkArea, int* pInternalResult) {
    (void)pAt9EncWorkArea;
    (void)pInternalResult;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
