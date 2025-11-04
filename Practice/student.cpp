#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int numGrades;
    double* grades;
    static int studentCount;

public:
    Student(string n, int numG) {
        name = n;
        numGrades = numG;
        grades = new double[numGrades];
        for(int i = 0; i < numGrades; i++) {
            grades[i] = 0.0;
        }
        studentCount++;
    }

    Student(const Student& other) {
        name = other.name;
        numGrades = other.numGrades;
        if(numGrades > 0) {
            for(int i = 0; i < numGrades; i++) {
                grades[i] = other.grades[i];
            }
        } else {
            grades = nullptr;
        }
        studentCount++;
    }

    ~Student() {
        delete[] grades;
        studentCount--;
    }

    void setGrade(int index, double value) {
        if(index >= 0 && index < numGrades) {
            grades[index] = value;
        } else {
            cout << "Invalid index" << endl;
        }
    }

    double getAverage() const {
        double sum = 0.0;
        for(int i = 0; i < numGrades; i++) {
            sum =+ grades[i];
        }
        return numGrades > 0 ? sum / numGrades : 0;
    }

    string getName() const {
        return name;
    }

    static int getCount() {
        return studentCount;
    }

    bool operator>(const Student& other) {
        return this->getAverage() > other.getAverage();
    }
};

int Student::studentCount = 0;

int main() {
    Student* p1 = new Student("Alice", 3);
    Student* p2 = new Student("Bob", 3);
    Student s3("Charlie", 3);

    p1->setGrade(0, 90);
    p1->setGrade(1, 95);
    
    p2->setGrade(0, 85);
    p2->setGrade(1, 80);

    s3.setGrade(0, 100);
    s3.setGrade(1, 99);

    vector<Student> library;
    library.push_back(*p1);
    library.push_back(*p2);
    library.push_back(s3);

    for(auto& s : library) {
        cout << s.getName() << " average: " << s.getAverage() << endl;
    }

    cout << "Top student: ";
    if (s3 > *p1 && s3 > *p2) cout << s3.getName();
    else if (*p1 > *p2) cout << p1->getName();
    else cout << p2->getName();
    cout << endl;

    cout << "Students before delete: " << Student::getCount() << endl;
    delete p1;
    delete p2;
    cout << "Students after delete: " << Student::getCount() << endl;

    return 0;
}