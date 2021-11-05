#ifndef SPOKER_ANALYSIS_DECK_H
#define SPOKER_ANALYSIS_DECK_H
#include <iostream>
#include "Card.h"
#include "CardHand.h"

class Deck {

public:
    Deck(); // Builds standard deck of 52 cards
    void shuffle(); // Shuffles deck
    void dealCard(CardHand& cardHand);
    friend std::ostream& operator <<(std::ostream& outs, const Deck& deck); // Outputs deck to console

private:
    static const int DECK_SIZE = 52;
    static int cardIndex; // Keeps track of where we are in the deck
    Card deck[DECK_SIZE];

    void swap(int position1, int position2); // Swaps the position of two cards in the deck
};

#endif //SPOKER_ANALYSIS_DECK_H
