//
// Created by vanes on 10/19/2021.
//

#ifndef SPOKER_ANALYSIS_SUIT_H
#define SPOKER_ANALYSIS_SUIT_H
#include <string>
#include "SuitsEnum.h"

class Suit {
public:
    // Constructors
    Suit();
    Suit(SuitsEnum suit);

    // Getters and setters
    SuitsEnum getSuit() const;  // SHOULD THIS RETURN A STRING INSTEAD?
    void setSuit(SuitsEnum suit);

    std::string toString() const; // Converts suit to string (e.g., "Hearts")
    char toChar() const; // Converts suit to string (e.g., 'H')

    friend bool operator ==(const Suit& card1, const Suit& card2);  // Checks whether the suit of two cards is the same
    friend bool operator !=(const Suit& card1, const Suit& card2);  // Checks whether the suit of two cards is NOT the same

private:
    SuitsEnum suit;
};


#endif //SPOKER_ANALYSIS_SUIT_H
