#include <iostream>
#include "DeckOfCards.h"
using namespace std;

int main() {
    DeckOfCards deck;           // create deck
    deck.shuffle();             // shuffle

    while(deck.moreCards()) {       // while cards remain
        Card card = deck.dealCard();        // keep dealing
        cout << card.toString() << endl;    // printing function
    }
}