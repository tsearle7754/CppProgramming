#include <iostream>
#include <fstream>
using namespace std;

// ofstream can be used to write primitive data type values, arrays, strings, and objects to a text file
// ex. ofstream output; -- make instance of ofstream class
// .open()- will open existing file or make a new file and open it
// output.close(); - data may not be saved properly if stream not closed

// absolute filename: contains the file's complete path and drive letter (ex- c:\example\scores.txt)
// relative filename: platform dependent

// ifstream can be used to read data from a text file.

int main()
    {
    ifstream input("scores.txt");

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