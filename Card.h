#ifndef SPOKER_ANALYSIS_CARD_H
#define SPOKER_ANALYSIS_CARD_H
#include <string>
#include <iostream>
#include "Rank.h"
#include "Suit.h"

class Card {
public:
    // Constructors
    Card();
    Card(RanksEnum rank, SuitsEnum suit);

    // Getters and setters
    RanksEnum getRank() const;
    SuitsEnum getSuit() const;
    void setRank(RanksEnum rank);
    void setSuit(SuitsEnum suit);

    friend std::ostream& operator <<(std::ostream& outs, const Card& card);

private:
    Rank rank;
    Suit suit;
};


#endif //SPOKER_ANALYSIS_CARD_H
