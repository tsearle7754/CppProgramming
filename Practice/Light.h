#ifndef LIGHT_H
#define LIGHT_H
#include "SmartDevice.h"
#include <iostream>
#include <string>
using namespace std;

class Light : public SmartDevice {
private:
    int brightness;

public:
    Light();
    Light(int b);

    int getBrightness() const;
    void setBrightness(int new_b);

    virtual void activate() const override;
    
    Light operator++(int);
};

#endif