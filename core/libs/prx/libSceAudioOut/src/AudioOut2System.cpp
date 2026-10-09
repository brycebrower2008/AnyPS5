#include <cstdint>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

static constexpr int USER_ID_SYSTEM = 0xFF;
static constexpr std::uint32_t MIN_SUPPORTED_3D_LATENCY = 1;
static constexpr std::uint32_t MAX_SUPPORTED_3D_LATENCY = 2;

extern "C" {

int APS5_VABI sceAudioOut2Initialize(void) {
    return 0;
}

int APS5_VABI sceAudioOut2Set3DLatency(int userId, std::uint32_t latency) {
    if (userId != USER_ID_SYSTEM || latency < MIN_SUPPORTED_3D_LATENCY || latency > MAX_SUPPORTED_3D_LATENCY) NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2GetSystemState(AudioOut2SystemState* state) {
    if (!state) return static_cast<int>(0x80260502);
    state->loudness = 0.0f;
    return 0;
}

int APS5_VABI sceAudioOut2SetSystemDebugState(const AudioOut2SystemDebugStateParam* param) {
    (void)param;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2UserGetSupportedAttributes(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2EnableChat(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2DisableChat(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoInit(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoTerminate(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoContextQueryMemory(void* paramsValue, size_t* memorySize) {
    (void)paramsValue;
    (void)memorySize;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoContextCreate(void* paramsValue, void* buffer, size_t bufferSize, uint64_t* context) {
    (void)paramsValue;
    (void)buffer;
    (void)bufferSize;
    (void)context;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoContextDestroy(uint64_t context) {
    (void)context;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoContextSetAttributes(uint64_t context, void* attributes, uint32_t numAttributes) {
    (void)context;
    (void)attributes;
    (void)numAttributes;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoContextAdvance(uint64_t context) {
    (void)context;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoContextPush(uint64_t context, uint32_t blocking) {
    (void)context;
    (void)blocking;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoContextGetQueueLevel(uint64_t context, uint32_t* queueLevel, uint32_t* availableQueues) {
    (void)context;
    (void)queueLevel;
    (void)availableQueues;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoPortCreate(uint64_t context, void* paramsValue, uint64_t* port) {
    (void)context;
    (void)paramsValue;
    (void)port;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoPortDestroy(uint64_t port) {
    (void)port;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoPortSetAttributes(uint64_t port, void* attributes, uint32_t numAttributes) {
    (void)port;
    (void)attributes;
    (void)numAttributes;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudioOut2LoPortGetState(uint64_t port, void* state) {
    (void)port;
    (void)state;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
