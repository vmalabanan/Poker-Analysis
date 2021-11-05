#include "CardHandScorer.h"

void CardHandScorer::scorePokerHand(const CardHand& cardHand, PokerScore& scores) {

    if (checkRoyalFlush(cardHand))
        scores += PokerScore::ROYAL_FLUSH;

    if (checkStraightFlush(cardHand))
        scores += PokerScore::STRAIGHT_FLUSH;

    if (checkFourOfAKind(cardHand))
        scores += PokerScore::FOUR_OF_A_KIND;

    if (checkFullHouse(cardHand))
        scores += PokerScore::FULL_HOUSE;

    if (checkFlush(cardHand))
        scores += PokerScore::FLUSH;

    if (checkStraight(cardHand))
        scores += PokerScore::STRAIGHT;

    if (checkThreeOfAKind(cardHand))
        scores += PokerScore::THREE_OF_A_KIND;

    if (checkTwoPair(cardHand))
        scores += PokerScore::TWO_PAIR;

    if (checkOnePair(cardHand))
        scores += PokerScore::ONE_PAIR;

    scores += PokerScore::HIGH_CARD;

}

//void CardHandScorer::checkHighCard(const CardHand& cardHand) {
//    highCard = cardHand[cardHand.size() - 1];
//}


int CardHandScorer::checkNumOfPairs(const CardHand& cardHand) {
    int count = 0;

    if (cardHand.hand[0].getRank() == cardHand.hand[1].getRank())
        count++;

    if (cardHand.hand[1].getRank() == cardHand.hand[2].getRank() && cardHand.hand[0].getRank() != cardHand.hand[2].getRank())
        count++;

    if (cardHand.hand[2].getRank() == cardHand.hand[3].getRank()  && cardHand.hand[1].getRank() != cardHand.hand[3].getRank())
        count++;

    if (cardHand.hand[0].getRank() == cardHand.hand[3].getRank())
        count++;

    if (cardHand.hand[3].getRank() == cardHand.hand[4].getRank()  && cardHand.hand[2].getRank() != cardHand.hand[4].getRank())
        count++;

    if (cardHand.hand[1].getRank() == cardHand.hand[4].getRank())
        count++;

    return count;
}

bool CardHandScorer::checkOnePair(const CardHand& cardHand) {
    int count = 0;

    count = checkNumOfPairs(cardHand);

    if (count > 0)
        return true;
    else
        return false;
}

bool CardHandScorer::checkTwoPair(const CardHand& cardHand) {
    int count = 0;

    count = checkNumOfPairs(cardHand);

    if (count > 1)
        return true;
    else
        return false;
}

bool CardHandScorer::checkThreeOfAKind(const CardHand& cardHand) {
    int count = 0;

    if (cardHand.hand[0].getRank() == cardHand.hand[2].getRank())
        count++;

    if (cardHand.hand[1].getRank() == cardHand.hand[3].getRank() && cardHand.hand[0].getRank() != cardHand.hand[3].getRank())
        count++;

    if (cardHand.hand[2].getRank() == cardHand.hand[4].getRank() && cardHand.hand[1].getRank() != cardHand.hand[4].getRank())
        count++;

    if (count > 0)
        return true;
    else
        return false;
}

bool CardHandScorer::checkStraight(const CardHand& cardHand) {
    if (cardHand.hand[0].getRank() == TWO && cardHand.hand[1].getRank() == THREE && cardHand.hand[2].getRank() == FOUR && cardHand.hand[3].getRank() == FIVE && cardHand.hand[4].getRank() == ACE)
        return true;

    else if (cardHand.hand[0].getRank() + 1 == cardHand.hand[1].getRank() && cardHand.hand[0].getRank() + 2 == cardHand.hand[2].getRank() &&
    cardHand.hand[0].getRank() + 3 == cardHand.hand[3].getRank() && cardHand.hand[0].getRank() + 4 == cardHand.hand[4].getRank())
        return true;

    else
        return false;
}

bool CardHandScorer::checkFlush(const CardHand& cardHand) {
    if (cardHand.hand[0].getSuit() == cardHand.hand[1].getSuit() && cardHand.hand[0].getSuit() == cardHand.hand[2].getSuit() && cardHand.hand[0].getSuit() == cardHand.hand[3].getSuit() && cardHand.hand[0].getSuit() == cardHand.hand[4].getSuit())
        return true;
    else
        return false;
}

bool CardHandScorer::checkFullHouse(const CardHand& cardHand) {
    if (cardHand.hand[0].getRank() == cardHand.hand[1].getRank() && cardHand.hand[2].getRank() == cardHand.hand[4].getRank())
        return true;
    else if (cardHand.hand[0].getRank() == cardHand.hand[2].getRank() && cardHand.hand[3].getRank() == cardHand.hand[4].getRank())
        return true;
    else
        return false;
}

bool CardHandScorer::checkFourOfAKind(const CardHand& cardHand) {
    int count = 0;

    if (cardHand.hand[0].getRank() == cardHand.hand[3].getRank())
        count++;

    if (cardHand.hand[1].getRank() == cardHand.hand[4].getRank())
        count++;

    if (count > 0)
        return true;
    else
        return false;
}

bool CardHandScorer::checkStraightFlush(const CardHand& cardHand) {
    if (checkStraight(cardHand) && checkFlush(cardHand))
        return true;
    else
        return false;
}

bool CardHandScorer::checkRoyalFlush(const CardHand& cardHand) {
    if (checkFlush(cardHand) && cardHand.hand[0].getRank() == TEN && cardHand.hand[1].getRank() == JACK && cardHand.hand[2].getRank() == QUEEN && cardHand.hand[3].getRank() == KING && cardHand.hand[4].getRank() == ACE)
        return true;
    else
        return false;
}