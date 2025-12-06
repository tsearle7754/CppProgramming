#include "SmartDevice.h"
#include <iostream>
using namespace std;

int SmartDevice::deviceCount = 0;

SmartDevice::SmartDevice() {
    id = "Unknown";
    location = "Unknown";
    deviceCount++;
}

SmartDevice::SmartDevice(string i, string l) {
    id = i;
    location = l;
    deviceCount++;
}

string SmartDevice::getID() const {
    return id;
}

string SmartDevice::getLocation() const {
    return location;
}

void SmartDevice::setID(const string& i) {
    id = i;
}

void SmartDevice::setLocation(const string& l) {
    location = l;
}

SmartDevice::~SmartDevice() {
    deviceCount--;
}

int SmartDevice::getDeviceCount() {
    return deviceCount;
}