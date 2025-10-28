#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include "Card.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DeckOfCards {
private:
    // variables
    int currentCard;
    
    // vector
    std::vector<Card> deck;

public:
    // constructor
    DeckOfCards();

    // functions
    void shuffle();

    Card dealCard();

    bool moreCards() const;
};

#endif