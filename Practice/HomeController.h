#ifndef HOMECONTROLLER_H
#define HOMECONTROLLER_H
#include "SmartDevice.h"
#include "Light.h"
#include <iostream>
#include <string>
using namespace std;

class HomeController : public SmartDevice {
private:
    SmartDevice** devices;
    int capacity;
    int size;

public:
    HomeController(int c);
    ~HomeController();

    void addDevice(SmartDevice* d);
    void activateAll() const;
    void saveLog(const string& filename) const;
};

#endif