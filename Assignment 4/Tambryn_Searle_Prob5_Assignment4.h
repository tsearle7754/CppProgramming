#ifndef MYDATE_H
#define MYDATE_H

class MyDate {
private:
    int year;
    int month;
    int day;

public:
    MyDate();   // no arg
    MyDate(long elapsedTime);   // elapsed seconds
    MyDate(int year, int month, int day);   // specified

    // getters
    int getYear() const;
    int getMonth() const;
    int getDay() const;

    // setters
    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);

    // set date
    void setDate(long elapsedTime);
};

#endif