//
// Created by vanes on 10/20/2021.
//

#ifndef SPOKER_ANALYSIS_CARDHAND_H
#define SPOKER_ANALYSIS_CARDHAND_H
#include <vector>
#include <iostream>
//#include <algorithm>
#include "Card.h"

class CardHand {
public:
    std::vector<Card> hand;
    void sortHand(); // Sorts cards in hand by rank
    void discardHand();
    friend std::ostream& operator <<(std::ostream& outs, const CardHand& cardHand);

private:
    void swap(Card& card1, Card& card2);
};


#endif //SPOKER_ANALYSIS_CARDHAND_H
