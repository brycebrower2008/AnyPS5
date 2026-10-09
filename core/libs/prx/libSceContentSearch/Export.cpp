#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"
#include <atomic>
#include <stdexcept>
#include <string>

namespace {
std::atomic<bool> g_initialized{false};
}

extern "C" {

int APS5_VABI sceContentSearchInit(const ContentSearchInitParam* init_param) {
    if (init_param == nullptr) APS5_INVALID_ARG_EX;
    bool expected = false;
    if (!g_initialized.compare_exchange_strong(expected, true)) throw std::logic_error(std::string(__func__) + ": already initialized");
    return 0;
}

int APS5_VABI sceContentSearchCloseMetadata(void) {
 NotImplemented_nid_no_patch(__func__);
 return 0;
}

int APS5_VABI sceContentSearchGetMetadataFieldInfo(void) {
 NotImplemented_nid_no_patch(__func__);
 return 0;
}

int APS5_VABI sceContentSearchGetMetadataValue(void) {
 NotImplemented_nid_no_patch(__func__);
 return 0;
}

int APS5_VABI sceContentSearchOpenMetadata(void) {
 NotImplemented_nid_no_patch(__func__);
 return 0;
}

int APS5_VABI sceContentSearchSearchContent(void) {
 NotImplemented_nid_no_patch(__func__);
 return 0;
}

int APS5_VABI sceContentSearchTerm(void) {
    bool expected = true;
    if (!g_initialized.compare_exchange_strong(expected, false)) throw std::logic_error(std::string(__func__) + ": not initialized");
    return 0;
}

int APS5_VABI sceContentSearchGetContentLastUpdateId(int64_t* lastUpdateId) {
    (void)lastUpdateId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceContentSearchGetNumOfContent(void* columnSet, uint32_t columnSetLength, int64_t* numOfContent, int64_t* lastUpdateId) {
    (void)columnSet;
    (void)columnSetLength;
    (void)numOfContent;
    (void)lastUpdateId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceContentSearchGetTotalContentSize(void* columnSet, uint32_t columnSetLength, int64_t* size, int64_t* lastUpdateId) {
    (void)columnSet;
    (void)columnSetLength;
    (void)size;
    (void)lastUpdateId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceContentSearchOpenMetadataByContentId(int64_t contentId, int* metadataId) {
    (void)contentId;
    (void)metadataId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
