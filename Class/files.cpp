#include <iostream>
#include <fstream>
using namespace std;

// ofstream can be used to write primitive data type values, arrays, strings, and objects to a text file
// ex. ofstream output; -- make instance of ofstream class
// .open()- will make a new file regardless of existence of previous file, will override previous data with nothing
// output.close(); - data may not be saved properly if stream not closed

// absolute filename: contains the file's complete path and drive letter (ex- c:\example\scores.txt)
// relative filename: platform dependent

// ifstream can be used to read data from a text file
// normally, ofstream and ifstream will be defined in the same .cpp file
// will need to know data type and things to be able to create variables to store them

int main()
    {
    ifstream input("scores.txt");

    // testing file existance
    if (input.fail()) {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    // testing end of file
    if (!input.eof()) {
        cout << "Keep going" << endl;
        return 0;
    }

    // Read data
    string firstName;
    char mi;
    string lastName;
    int score;
    input >> firstName >> mi >> lastName >> score;
    cout << firstName << " " << mi << " " << lastName << " "
        << score << endl;

    input >> firstName >> mi >> lastName >> score;
    cout << firstName << " " << mi << " " << lastName << " "
        << score << endl;

    input.close();

    cout << "Done" << endl;

    return 0;
    }

// testing file existance: .fail()- if it comes we'll still be prepared
// .eof() function will
// know how to append file- not for exam but should know

// getline(input, city, '#'); -- read a city with a delimiter
// different getline for different ways files are set up