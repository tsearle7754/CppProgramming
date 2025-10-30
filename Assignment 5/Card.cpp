#include "Card.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// static vectors
std::vector<std::string> Card::faceNames = {"Ace", "Deuce", "Three", "Four", "Five", "Six",
                                            "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
std::vector<std::string> Card::suitNames = {"Hearts", "Diamonds", "Clubs", "Spades"};

// constructor
Card::Card(int f, int s) {
    face = f;
    suit = s;
}

// accessors
int Card::getFace() const { return face; }
int Card::getSuit() const { return suit; }

// printing func
string Card::toString() const {
    return faceNames[face] + " of " + suitNames[suit];
}