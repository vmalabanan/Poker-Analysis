//
// Created by vanes on 10/20/2021.
//

#include "CardHand.h"

void CardHand::sortHand() {
//    std::sort(this->begin(), this->end());

    // Putting the elements of hand into a temp array for sorting
    Card tempArr[hand.size()];
    for (int i = 0; i < hand.size(); ++i) {
        tempArr[i] = hand[i];
    }

    // Bubble sort
    for (int i = 0; i < hand.size()-1; ++i) {                  // It's size()-1 because to sort an array of size size, you swap elements size-1 times.
        for (int j = 0; j < hand.size()-1-i; ++j) {                // Only goes up to size()-1-i and not size()-1 because after the first pass,
            if (tempArr[j].getRank() > tempArr[j+1].getRank())     // the largest element is already on the right-most side*, so we don't have
                swap(tempArr[j], tempArr[j+1]);             // to worry about sorting it anymore. Decreases by 1 each pass, because
        }                                                          // the elements to right-most side will always be the largest and don't
    }                                                              // need to be sorted anymore.
                                                                   // After the first past, there can be numbers equally as large as the right-most
                                                                   // element that still need to be sorted. But none would be *larger*

    // Putting the elements of the temp array into a temp vector
    std::vector<Card> tempVec;
    for (int i = 0; i < hand.size(); ++i) {
        tempVec.push_back(tempArr[i]);
    }

    // Setting hand = temp vector
    hand = tempVec;
}

void CardHand::swap(Card& card1, Card& card2) {
    Card temp;
    temp = card1;
    card1 = card2;
    card2 = temp;
}

void CardHand::discardHand() {
    std::vector<Card> temp;
    hand = temp;
}

std::ostream& operator <<(std::ostream& outs, const CardHand& cardHand) {
    for (int i = 0; i < cardHand.hand.size(); ++i) {
        outs << cardHand.hand[i];
    }
}
