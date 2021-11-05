//
// Created by vanes on 10/19/2021.
//

#ifndef SPOKER_ANALYSIS_RANK_H
#define SPOKER_ANALYSIS_RANK_H
#include <string>
#include "RanksEnum.h"

class Rank {
public:
    // Constructors
    Rank();
    Rank(RanksEnum rank);

    // Getters and setters
    RanksEnum getRank() const;  // SHOULD THIS RETURN A STRING INSTEAD?
    void setRank(RanksEnum rank);

    std::string toString() const; // Converts rank to string (e.g., "Ace" or "Ten")
    std::string toShortString() const; // Converts rank to string (e.g., "A" or "10")
    char toChar() const; // Converts rank to char (e.g., 'A' or 'T')

    friend bool operator <(const Rank& card1, const Rank& card2);
    friend bool operator >(const Rank& card1, const Rank& card2);
    friend bool operator ==(const Rank& card1, const Rank& card2);  // Checks whether the rank of two cards is the same
    friend bool operator !=(const Rank& card1, const Rank& card2);  // Checks whether the rank of two cards is NOT the same

private:
    RanksEnum rank;
};


#endif //SPOKER_ANALYSIS_RANK_H
