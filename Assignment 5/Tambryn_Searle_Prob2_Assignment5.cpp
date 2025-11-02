#include <iostream>
using namespace std;

template<typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2) {
    // largest element in l1, smallest in l2, check if l2 > l1
    T max1 = list1[0];
    for(int i = 1; i < size1; i++) {
        if(list1[i] > max1) {
            max1 = list1[i];
        }
    }
    T min2 = list2[0];
    for(int j = 1; j < size2; j++) {
        if(list2[j] < min2) {
            min2 = list2[j];
        }
    }
    return min2 > max1;
}