#include <iostream>

int whatIsThis(const int b[], int p);

int main(void) {
    const int SIZE = 10;
    int x;

    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    x = whatIsThis(a, SIZE);
    std::cout << x;
}