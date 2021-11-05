//
// Created by vanes on 10/20/2021.
//

#ifndef SPOKER_ANALYSIS_POKERSCORE_H
#define SPOKER_ANALYSIS_POKERSCORE_H
#include <vector>
#include <iostream>
#include "CardHand.h"

class PokerScore {
public:
    enum Scores{
        ROYAL_FLUSH, //A, K, Q, J, 10, all the same suit.

        STRAIGHT_FLUSH, //five cards of the same suit and consecutive ranking

        FOUR_OF_A_KIND, //four cards of the same ranking

        FULL_HOUSE, //three cards of the same rank along with two cards of the same rank

        FLUSH, //five cards of the same suit

        STRAIGHT, //five cards in consecutive ranking

        THREE_OF_A_KIND, //three cards of the same rank

        TWO_PAIR, //two cards of the same rank along with another two cards of the same rank

        ONE_PAIR, //two cards of the same rank

        HIGH_CARD //highest card in the player’s hand
    };

    std::vector<Scores> scores;
    void operator +=(const Scores& score);
};


#endif //SPOKER_ANALYSIS_POKERSCORE_H
