#ifndef CARD_H
#define CARD_H
#include <vector>
#include <string>
using namespace std;

class Card {
private:
    // varibles
    int face;
    int suit;

    // vectors
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;

public:
    // constructor
    Card(int f, int s);

    // accessors
    int getFace() const;
    int getSuit() const;

    // printing func
    string toString() const;
};

#endif