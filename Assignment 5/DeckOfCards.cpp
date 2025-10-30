#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// constructor
DeckOfCards::DeckOfCards() {
    // loop through all faces and suits, create new Card(face, suit), use push_back
    currentCard = 0;
    for(int suit = 0; suit < 4; ++suit) {
        for(int face = 0; face < 13; ++face) {
            deck.push_back(Card(face, suit));
        }
    }
}

// functions
void DeckOfCards::shuffle() {
    srand(time(0));
    // for each card, random index (random function)
    for(int i = 0; i < deck.size(); i++) {
        int randomIndex = rand() % deck.size();
        std::swap(deck[i], deck[randomIndex]);
    }
}

Card DeckOfCards::dealCard() {
    return deck[currentCard++];     // post-increment
}

bool DeckOfCards::moreCards() const {
    return currentCard < deck.size();
}