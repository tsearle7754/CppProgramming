# include <iostream>
# include <string>
using namespace std;

void count(const string &s) {
    int arr[26] = {0};              // Counter
    for (char c : s) {              // Loop for counting each letter
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            arr[index]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            char letter = i + 'a';
            cout << letter << ": " << arr[i] << " times" << endl;
        }
    }
}

int main() {
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    // Convert string to lowercase
    for (char &c : s) {
        c = tolower(c);
    }
    count(s);
}