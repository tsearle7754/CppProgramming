#include "DeckOfCards.h"
#include <iostream>
using namespace std;

int main() {
    DeckOfCards deck;
    deck.shuffle();

    while (deck.moreCards()) {
        cout << deck.dealCard().toString() << endl;
    }

    return 0;
}
