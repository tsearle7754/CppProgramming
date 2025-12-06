#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H
#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string id;
    string location;

public:
    static int deviceCount;

    SmartDevice();
    SmartDevice(string i, string l);

    string getID() const;
    string getLocation() const;

    void setID(const string& newID);
    void setLocation(const string& newLoc);

    virtual void activate() const = 0;

    virtual ~SmartDevice();
    static int getDeviceCount();
};

#endif