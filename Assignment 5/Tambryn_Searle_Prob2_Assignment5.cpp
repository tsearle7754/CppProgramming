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

int main() {
    int a1[] = {1, 3, -3, 80};
    int a2[] = {81, 90, 50};
    cout << "Int arrays: " << (isGreater(a1, a2, 4, 3) ? "true" : "false") << endl;

    double d1[] = {1.57, 3.14159, -360, 0};
    double d2[] = {5.5, 10.1};
    cout << "Double arrays: " << (isGreater(d1, d2, 4, 2) ? "true" : "false") << endl;

    string s1[] = {"abcd", "ab", "Adad", "Cat"};
    string s2[] = {"dog", "zebra"};
    cout << "String arrays: " << (isGreater(s1, s2, 4, 2) ? "true" : "false") << endl;

    return 0;
}