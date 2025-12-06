#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

class MediaItem {
protected:
    string title;
    string creator;
    double fileSizeMB;

public:
    MediaItem() {
        title = "Unknown";
        creator = "Unknown";
        fileSizeMB = 0.0;
    }

    MediaItem(string t, string c, double f) {
        title = t;
        creator = c;
        fileSizeMB = f;
    }

    string getTitle() const {
        return title;
    }

    string getCreator() const {
        return creator;
    }

    double getFileSizeMB() const {
        return fileSizeMB;
    }

    virtual void display() const = 0;

    virtual ~MediaItem() {
        cout << "Virtual Destructor" << endl;
    }
};

class EBook : public MediaItem {
protected:
    int numPages;

public:
    EBook(const string& t, const string& c, double f, int n) {
        title = t;
        creator = c;
        fileSizeMB = f;
        numPages = n;
    }

    int getNumPages() {
        return numPages;
    }

    void display() const override {
        cout << "Title: " << getTitle() << ", Creator: " <<
            getCreator() << ", FileSizeMB: " << getFileSizeMB() <<
            ", Pages: " << numPages << endl;
    }

    bool operator==(const EBook& other) const {
        return getTitle() == other.title && getCreator() == other.creator;
    }
};

class AudioBook : public MediaItem {
private:
    double lengthHours;

public:
    AudioBook(const string& t, const string& c, double f, double l) {
        title = t;
        creator = c;
        fileSizeMB = f;
        lengthHours = l;
    }

    double getLengthHours() {
        return lengthHours;
    }

    void display() const override {
        cout << "Title: " << getTitle() << ", Creator: " <<
            getCreator() << ", FileSizeMB: " << getFileSizeMB() <<
            ", Hours: " << lengthHours << endl;
    }

    bool operator==(const AudioBook& other) const {
        return getTitle() == other.title && getCreator() == other.creator && (abs(lengthHours - other.lengthHours) < 0.01);
    }
};

class Library {
    private:
        MediaItem** items;
        int capacity;
        int size;

    public:
        Library(int c) {
            capacity = c;
            size = 0;
            items = new MediaItem*[capacity];
        }

    ~Library() {
        for(int i = 0; i < size; i++) {
            delete items[i];
        }
    }

    void addItem(MediaItem* m) {
        if (size >= capacity) {
            throw runtime_error("Library is full");
        }
        items[size] = m;
        size++;
    }

    void displayAll() {
        for(int i = 0; i < size; i++) {
            items[i]->display();
        }
    }

    void saveToFile(const string& filename) const {
        ofstream outFile(filename);

        if (!outFile.is_open()) {
            throw runtime_error("Could not open file");
        }

        for (int i = 0; i < size; i++) {
            EBook* eb = dynamic_cast<EBook*>(items[i]);
            if (eb != nullptr) {
                outFile << "EBOOK,"
                        << eb->getTitle() << ","
                        << eb->getCreator() << ","
                        << eb->getFileSizeMB() << ","
                        << eb->getNumPages()
                        << endl;
                continue;
            }

            AudioBook* ab = dynamic_cast<AudioBook*>(items[i]);
            if (ab != nullptr) {
                outFile << "AUDIO,"
                        << ab->getTitle() << ","
                        << ab->getCreator() << ","
                        << ab->getFileSizeMB() << ","
                        << ab->getLengthHours()
                        << endl;
                continue;
            }
        }

        outFile.close();
    }
};

int main() {
    Library lib(5);

    try {
        // dynamically allocated items
        MediaItem* e1 = new EBook("Dune", "Frank Herbert", 2.5, 412);
        MediaItem* a1 = new AudioBook("1984", "George Orwell", 1.8, 11.3);

        lib.addItem(e1);
        lib.addItem(a1);

        // Display everything
        lib.displayAll();

        // Save to file
        lib.saveToFile("media.txt");

        cout << "Data successfully written to media.txt" << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}