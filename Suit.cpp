//
// Created by vanes on 10/19/2021.
//

#include <vector>
#include "Suit.h"

Suit::Suit() {

}

Suit::Suit(SuitsEnum suit) : suit(suit) {

}

SuitsEnum Suit::getSuit() const{
    return suit;
}

void Suit::setSuit(SuitsEnum suit) {
    this->suit = suit;
}

std::string Suit::toString() const {
    std::vector<std::string> suitList = {"Hearts", "Diamonds", "Clubs", "Spades"};
    return suitList[suit];
}

char Suit::toChar() const {
    std::vector<char> suitList = {'H', 'D', 'C', 'S'};
    return suitList[suit];
}

bool operator ==(const Suit& card1, const Suit& card2) {
    return (card1.suit == card2.suit);
}

bool operator !=(const Suit& card1, const Suit& card2) {
    return (card1.suit != card2.suit);
}