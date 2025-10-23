#include "Tambryn_Searle_Prob5_Assignment4.h"
#include <ctime>
using namespace std;

// no arg- current date
MyDate::MyDate() {
    time_t now = time(0);       // current time in seconds
    tm* localTime = localtime(&now);    // convert to local date/time
    year = 1900 + localTime->tm_year;
    month = localTime->tm_mon;
    day = localTime->tm_mday;
}

// constructor with elapsed time
MyDate::MyDate(long elapsedTime) {
    setDate(elapsedTime);
}

// specified constructor
MyDate::MyDate(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

// getters
int MyDate::getYear() const { return year; }
int MyDate::getMonth() const { return month; }
int MyDate::getDay() const { return day; }

// setters
void MyDate::setYear(int y) { year = y; }
void MyDate::setMonth(int m) { month = m; }
void MyDate::setDay(int d) { day = d; }

// convert seconds to date
void MyDate::setDate(long elapsedTime) {
    time_t t = static_cast<time_t>(elapsedTime);
    tm* localTime = localtime(&t);

    year = 1900 + localTime->tm_year;
    month = localTime->tm_mon;
    day = localTime->tm_mday;
}