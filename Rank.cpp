//
// Created by vanes on 10/19/2021.
//

#include <vector>
#include "Rank.h"


Rank::Rank() {

}

Rank::Rank(RanksEnum rank) :rank(rank) {

}

RanksEnum Rank::getRank() const {
    return rank;
}

void Rank::setRank(RanksEnum rank) {
    this->rank = rank;
}

std::string Rank::toString() const {
    std::vector<std::string> rankList = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    return rankList[rank - 2];
}

std::string Rank::toShortString() const {
    std::vector<std::string> rankList = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    return rankList[rank - 2];
}

char Rank::toChar() const {
    std::vector<char> rankList = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    return rankList[rank - 2];
}

bool operator <(const Rank& card1, const Rank& card2) {
    return (card1.rank < card2.rank);
}

bool operator >(const Rank& card1, const Rank& card2) {
    return (card1.rank > card2.rank);
}

bool operator ==(const Rank& card1, const Rank& card2) {
    return (card1.rank == card2.rank);
}

bool operator !=(const Rank& card1, const Rank& card2) {
    return (card1.rank != card2.rank);
}