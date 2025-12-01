#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double* grade;

public:
    Student(string n, double g) {
        name = n;
        grade = new double(g);
    }
    // deep copy
    Student(const Student& other) {
        name = other.name;
        grade = new double(*other.grade);
    }

    ~Student() {
        delete grade;
    }

    Student& operator+=(double bonus) {
        *grade += bonus;
        return *this;
    }

    void display() const {
        cout << name << ": " << *grade << endl;
    }

    string getName() const {
        return name;
    }

    friend const Student& betterStudent(const Student& a, const Student& b);
};

const Student& betterStudent(const Student& a, const Student& b) {
    return (*a.grade > *b.grade) ? a : b;
}

int main() {
    Student s1("Bob", 95);
    Student s2("Nancy", 65);

    s2 += 10.0;

    cout << "After bonus: " << endl;
    s1.display();
    s2.display();

    cout << "Better student: " << betterStudent(s1, s2).getName() << endl;

    return 0;
}