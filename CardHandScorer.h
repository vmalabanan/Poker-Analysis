#ifndef SPOKER_ANALYSIS_CARDHANDSCORER_H
#define SPOKER_ANALYSIS_CARDHANDSCORER_H
#include "CardHand.h"
#include "PokerScore.h"


class CardHandScorer {
public:
//    static PokerScore scorePokerHand(const CardHand& cardHand);

    static void scorePokerHand(const CardHand& cardHand, PokerScore& scores);

private:
//    static void checkHighCard(const CardHand& cardHand);
    static int checkNumOfPairs(const CardHand& cardHand);
    static bool checkOnePair(const CardHand& cardHand);
    static bool checkTwoPair(const CardHand& cardHand);
    static bool checkThreeOfAKind(const CardHand& cardHand);
    static bool checkStraight(const CardHand& cardHand);
    static bool checkFlush(const CardHand& cardHand);
    static bool checkFullHouse(const CardHand& cardHand);
    static bool checkFourOfAKind(const CardHand& cardHand);
    static bool checkStraightFlush(const CardHand& cardHand);
    static bool checkRoyalFlush(const CardHand& cardHand);

    // do these need to be static too?
//    static Card highCard;
//    static Card onePair;
//    static Card twoPair;
//    static Card threeOfAKind;
//    static Card straight;
//    static Card fullHouse;
//    static Card fourOfAKind;
//    static Card straightFlush;
//    static Card royalFlush;
};


#endif //SPOKER_ANALYSIS_CARDHANDSCORER_H
