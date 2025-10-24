#include <iostream>
#include <ctime>
using namespace std;

class MyDate {
private:
    int year;
    int month;
    int day;

public:
    // no arg- current date
    MyDate() {
        time_t now = time(0);       // current time in seconds
        tm* localTime = localtime(&now);    // convert to local date/time
        year = 1900 + localTime->tm_year;
        month = localTime->tm_mon;
        day = localTime->tm_mday;
    }

    // constructor with elapsed time
    MyDate(long elapsedTime) {
        setDate(elapsedTime);
    }

    // specified constructor
    MyDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }

    // getters
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }

    // setters
    void setYear(int y) { year = y; }
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }

    // convert seconds to date
    void setDate(long elapsedTime) {
        time_t t = static_cast<time_t>(elapsedTime);
        tm* localTime = localtime(&t);

        year = 1900 + localTime->tm_year;
        month = localTime->tm_mon;
        day = localTime->tm_mday;
    }
};


int main() {
    // create first date
    MyDate date1;
    cout << "Current date: " << date1.getYear() << "-"
                            << (date1.getMonth() + 1) << "-"
                            << date1.getDay() << endl;

    // create second date
    MyDate date2(3435555513);
    cout << "Elapsed time date: " << date2.getYear() << "-"
                                << date2.getMonth() + 1 << "-"
                                << date2.getDay() << endl;

    return 0;
}