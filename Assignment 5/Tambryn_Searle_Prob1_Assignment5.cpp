#include <iostream>
using namespace std;

template<typename T>
T getMin(const T array [], int size) {
    T minVal = array[0];
    for(int i = 0; i < size; i++) {
        if(array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}


int main() {
    int i_array[4] = {1, 3, -3, 80};
    double d_array[4] = {1.57, 3.14159, -360, 0};
    std::string s_array[4] = {"abcd", "ab", "Adad", "Cat"};

    cout << getMin(i_array, 4) << endl;
    cout << getMin(d_array, 4) << endl;
    cout << getMin(s_array, 4) << endl;
}