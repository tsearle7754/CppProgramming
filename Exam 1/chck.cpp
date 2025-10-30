#include <iostream>
using namespace std;

int main() {
    int a = 56 % 6;
    float b = 2 + 78 % 4;
    float c = (34 % 5) / 3;
    float d = 2 * 5 / 5 + 3 - 34 % 15;
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}