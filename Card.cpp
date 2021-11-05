#include "Card.h"

Card::Card() : Card(ACE, SPADES){
    // Default card = ace of spades
}

Card::Card(RanksEnum rank, SuitsEnum suit) {
    this->rank.setRank(rank);
    this->suit.setSuit(suit);
}

RanksEnum Card::getRank() const {
    return rank.getRank();
}

SuitsEnum Card::getSuit() const {
    return suit.getSuit();
}

void Card::setRank(RanksEnum rank) {
    this->rank.setRank(rank);
}
void Card::setSuit(SuitsEnum suit) {
    this->suit.setSuit(suit);
}

std::ostream& operator <<(std::ostream& outs, const Card& card) {
    outs << card.rank.toString() << " of " << card.suit.toString() << std::endl;
    return outs;
}



