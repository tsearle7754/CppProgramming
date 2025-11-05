#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Playlist {
private:
    string* songs;
    int numSongs;

public:
    Playlist(int n) {
        numSongs = n;
        songs = new string[numSongs];
        for(int i = 0; i < numSongs; i++) {
            songs[i] = "Unknown";
        }
    }

    Playlist(const Playlist& other) {
        numSongs = other.numSongs;
        songs = new string[numSongs];
        for(int i = 0; i < numSongs; i++) {
            songs[i] = other.songs[i];
        }
    }

    ~Playlist() {
        delete[] songs;
    }
};

class Book {
private:
    string title;
    double price;

public:
    Book(string t, double p) {
        title = t;
        price = p;
    }
    
    string getTitle() const {
        return title;
    }

    double getPrice() const {
        return price;
    }
};

template<typename T>
class Pair {
private:
    T first, second;

public:
    Pair(T f, T s) {
        first = f;
        second = s;
    }

    bool operator==(const Pair<T>& other) const {
        return (first == other.first && second == other.second);
    }

    void display() const {
        cout << "(" << first << ", " << second << ")" << endl;
    }
};

class BankAccount {
private:
    string name;
    double balance;

public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }

    string getName() const {
        return name;
    }

    double getBalance() const {
        return balance;
    }

    friend const BankAccount& richer(const BankAccount& a, const BankAccount& b);
};

const BankAccount& richer(const BankAccount& a, const BankAccount& b) {
    return a.getBalance() > b.getBalance() ? a : b;
}

class Item {
private:
    double* price;
    string name;
    static int count;

public:
    Item(string n, double p) {
        name = n;
        price = new double(p);
        count++;
    }

    Item(const Item& other) {
        name = other.name;
        price = new double(*other.price);
        count++;
    }

    ~Item() {
        delete price;
        count--;
    }

    bool operator==(const Item& other) {
        return name == other.name;
    }

    friend const Item& cheaperItem(const Item& a, const Item& b);

    static int getCount() {
        return count;
    }
};

const Item& cheaperItem(const Item& a, const Item& b) {
    return (*a.price < *b.price) ? a : b;
}

class Student {
private:
    string name;
    double* gpa;
    static int count;

public:
    Student(string n, double g) {
        name = n;
        gpa = new double(g);
        count++;
    }

    Student(const Student& other) {
        name = other.name;
        gpa = new double(*other.gpa);
        count++;
    }

    ~Student() {
        delete gpa;
        count--;
    }

    bool operator==(const Student& other) {
        return name == other.name;
    }

    friend const Student& higherGPA(const Student& a, const Student& b);

    static int getCount() {
        return count;
    }

    int getGPA() const {
        return *gpa;
    }

    string getName() const {
        return name;
    }

    void display() {
        cout << "Name: " << name << ", GPA: " << *gpa << endl;
    }
};

const Student& higherGPA(const Student& a, const Student& b) {
    return (*a.gpa > *b.gpa) ? a : b;
}

class Person {
private:
    char* name;
    int age;

public:
    Person(char n, int a) {
        int l;
        age = a;
        name = new char(l);
        
    }
};

int main() {
    vector<Book> books;

    books.push_back(Book("C++ Basics", 19.99));
    books.push_back(Book("Mastering C++", 25.50));
    books.push_back(Book("Algorithms", 35.00));

    cout << "Books over $20:" << endl;

    for(const Book& b : books) {
        if(b.getPrice() > 20.0) {
            cout << "- " << b.getTitle() << endl;
        }
    }

    Pair<int> p1(10, 20);
    Pair<int> p2(10, 20);
    Pair<int> p3(5, 30);

    cout << "p1: ";
    p1.display();
    cout << "p2: ";
    p2.display();
    cout << "p3: ";
    p3.display();

    cout << "p1 == p2? " << (p1 == p2) << endl;
    cout << "p1 == p3? " << (p1 == p3) << endl;

    BankAccount acc1("Alice", 1500.0);
    BankAccount acc2("Bob", 2200.0);

    const BankAccount& richerAccount = richer(acc1, acc2);

    cout << richerAccount.getName() << "has more money ($"
        << richerAccount.getBalance() << ")" << endl;

    Student* s1 = new Student("Alice", 3.8);
    Student s2("Bob", 3.5);
    Student s3("Charlie", 3.9);

    Student s4(s2);

    cout << "Higher GPA between Bob and Charlie: "
        << higherGPA(s2, s3).getName() << endl;

    if(s2 == s4)
        cout << "Bob and his copy are the same name." << endl;

    vector<Student> students = {*s1, s2, s3, s4};

    cout << "\nAll students:\n";
    for(int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    cout << "\nTotal student: " << Student::getCount() << endl;

    delete s1;
    cout << "After deleting p1, count: " << Student::getCount() << endl;

    return 0;
}