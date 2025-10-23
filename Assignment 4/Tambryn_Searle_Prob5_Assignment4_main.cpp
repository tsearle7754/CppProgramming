#include <iostream>
#include "Tambryn_Searle_Prob5_Assignment4.h"
using namespace std;

int main() {
    // create first date
    MyDate date1;
    cout << "Current date: " << date1.getYear() << "-"
                            << date1.getMonth() + 1 << "-"
                            << date1.getDay() << endl;

    // create second date
    MyDate date2(3435555513);
    cout << "Elapsed time date: " << date2.getYear() << "-"
                                << date2.getMonth() + 1 << "-"
                                << date2.getDay() << endl;

    return 0;
}