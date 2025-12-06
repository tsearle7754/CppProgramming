#include "Light.h"
#include <iostream>
using namespace std;

Light::Light() : brightness(0) {}

Light::Light(int b) : brightness(b) {}

int Light::getBrightness() const {
    return brightness;
}

void Light::setBrightness(int new_b) {
    if (new_b >= 0 && new_b <= 100)
        brightness = new_b;
    else
        cout << "Brightness must be 0–100\n";
}

void Light::activate() const {
    cout << "Activating Light " << getID()
         << " at " << getLocation()
         << " with brightness " << brightness << endl;
}

// postfix operator ++
Light Light::operator++(int) {
    Light old = *this;

    if (brightness <= 90)
        brightness += 10;
    else
        brightness = 100;

    return old;
}