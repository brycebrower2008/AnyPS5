#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

#include <string>

extern "C" {

std::int32_t APS5_VABI sceBluetoothHidInit() {
    return 0;
}

std::int32_t APS5_VABI sceBluetoothHidRegisterCallback(void* callback, std::int32_t flags, void* param) {
    (void)flags;
    (void)param;
    if (callback == nullptr) throw std::invalid_argument(std::string(__func__) + ": null callback");
    return 0;
}

std::int32_t APS5_VABI sceBluetoothHidUnregisterCallback() {
    return 0;
}

std::int32_t APS5_VABI sceBluetoothHidRegisterDevice(std::uint16_t vendorId, std::uint16_t productId) {
    (void)vendorId;
    (void)productId;
    return 0;
}

std::int32_t APS5_VABI sceBluetoothHidUnregisterDevice(std::uint16_t vendorId, std::uint16_t productId) {
    (void)vendorId;
    (void)productId;
    return 0;
}

int APS5_VABI sceBluetoothHidGetDeviceName() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidGetInputReport() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidSetOutputReport() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidParamInitialize(void* param, uint64_t value) {
    (void)param;
    (void)value;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidThreadParamInitialize(uint32_t* param, uint32_t value1, uint64_t value2) {
    (void)param;
    (void)value1;
    (void)value2;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidGetReportDescriptor(uint64_t handle, void* buffer, uint64_t length) {
    (void)handle;
    (void)buffer;
    (void)length;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidGetDeviceInfo(uint32_t deviceId, void* info) {
    (void)deviceId;
    (void)info;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidGetFeatureReport(void* report, uint32_t reportId) {
    (void)report;
    (void)reportId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidSetFeatureReport(uint64_t handle, uint32_t reportId, void* data, uint64_t length) {
    (void)handle;
    (void)reportId;
    (void)data;
    (void)length;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidInterruptOutput(uint64_t handle, uint32_t reportId, void* data, uint64_t length) {
    (void)handle;
    (void)reportId;
    (void)data;
    (void)length;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidDisconnectDevice(uint32_t deviceId) {
    (void)deviceId;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceBluetoothHidDebugGetVersion(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
