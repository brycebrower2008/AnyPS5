#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceVdecswCreateDecoder() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswDeleteDecoder() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswQueryComputeMemoryInfo() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswFinalizeDecodeSequence() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswQueryDecoderMemoryInfo() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswSetDecodeInput() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswReleaseComputeQueue() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswAllocateComputeQueue() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswGetAvcPictureInfo() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswTrySyncDecodeOutput() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswTrySyncDecodeInput() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswSetDecodeOutput() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswResetDecoder() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswSyncDecodeInput(void* decoderInstance, void* inputResultOut) {
    (void)decoderInstance;
    (void)inputResultOut;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswSyncDecodeOutput(void* decoderInstance, void* outputInfoOut) {
    (void)decoderInstance;
    (void)outputInfoOut;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswGetPictureInfo(void* outputInfoIn, void* firstPictureInfoOut, void* secondPictureInfoOut) {
    (void)outputInfoIn;
    (void)firstPictureInfoOut;
    (void)secondPictureInfoOut;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswGetHevcPictureInfo(void* outputInfoIn, void* pictureInfoOut) {
    (void)outputInfoIn;
    (void)pictureInfoOut;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceVdecswGetVp9PictureInfo(void* outputInfoIn, void* pictureInfoOut) {
    (void)outputInfoIn;
    (void)pictureInfoOut;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
