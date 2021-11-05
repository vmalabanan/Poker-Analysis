#include <ctime>
#include "PokerHandProbability.h"
#include "Deck.h"
#include "CardHandScorer.h"

std::vector<std::string> pokerHandProbability()
{
    srand(time(nullptr));

    std::vector<std::string> odds;
    Deck myDeck;
    myDeck.shuffle();

    CardHand vanessa;
    CardHand picard;
    CardHand janeway;
    CardHand data;
    CardHand spock;
    CardHand randomHand;

    PokerScore pokerScore;

    for (int j = 0; j < NUMBER_OF_LOOPS; ++j) {
        for (int i = 0; i < 5; ++i) {
            myDeck.dealCard(vanessa);
            myDeck.dealCard(picard);
            myDeck.dealCard(janeway);
            myDeck.dealCard(data);
            myDeck.dealCard(spock);
        }

        randomHand = chooseRandomHand(vanessa, picard, janeway, data, spock);

        randomHand.sortHand();

        CardHandScorer::scorePokerHand(randomHand, pokerScore);

        vanessa.discardHand();
        picard.discardHand();
        janeway.discardHand();
        data.discardHand();
        spock.discardHand();
    }

    odds.push_back(oddsToString(pokerScore.scores, PokerScore::ROYAL_FLUSH));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::STRAIGHT_FLUSH));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::FOUR_OF_A_KIND));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::FULL_HOUSE));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::FLUSH));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::STRAIGHT));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::THREE_OF_A_KIND));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::TWO_PAIR));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::ONE_PAIR));
    odds.push_back(oddsToString(pokerScore.scores, PokerScore::HIGH_CARD));

    return odds;

}

CardHand chooseRandomHand(CardHand hand1, CardHand hand2, CardHand hand3, CardHand hand4, CardHand hand5) {
    int i = rand() % 5;

    switch (i) {
        case 0:
            return hand1;
            break;
        case 1:
            return hand2;
            break;
        case 2:
            return hand3;
            break;
        case 3:
            return hand4;
            break;
        case 4:
            return hand5;
    }
}

int countScores(const std::vector<PokerScore::Scores> scores, PokerScore::Scores hand)
{
    int count = 0;

    for (int i = 0; i < scores.size(); ++i) {
        if (scores[i] == hand)
            count++;
    }
    return count;
}

void displayCount(const std::vector<PokerScore::Scores> scores, PokerScore::Scores hand) {

    int count = countScores(scores, hand);
    std::string handString = scoreToString(hand);

    std::cout << handString << ": " << count << std::endl;

}

void displayOdds(const std::vector<PokerScore::Scores> scores, PokerScore::Scores hand) {
    int count = countScores(scores, hand);
    double loopsReduced = static_cast<double>(NUMBER_OF_LOOPS) / count;
    std::string handString = scoreToString(hand);

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(3);

    std::cout << handString << ": " << loopsReduced << " : " << "1" << std::endl;

}

std::string oddsToString(const std::vector<PokerScore::Scores> scores, PokerScore::Scores hand) {
    int count = countScores(scores, hand);
    double loopsReduced = static_cast<double>(NUMBER_OF_LOOPS) / count;
    std::string odds;

    odds = std::to_string(loopsReduced);
    odds += " : ";
    odds +=  "1";

    return odds;
}

std::string scoreToString(PokerScore::Scores score) {
    switch (score) {
        case PokerScore::ROYAL_FLUSH:
            return "Royal Flush";
            break;
        case PokerScore::STRAIGHT_FLUSH:
            return "Straight Flush";
            break;
        case PokerScore::FOUR_OF_A_KIND:
            return "Four of a Kind";
            break;
        case PokerScore::FULL_HOUSE:
            return "Full House";
            break;
        case PokerScore::FLUSH:
            return "Flush";
            break;
        case PokerScore::STRAIGHT:
            return "Straight";
            break;
        case PokerScore::THREE_OF_A_KIND:
            return "Three of a Kind";
            break;
        case PokerScore::TWO_PAIR:
            return "Two Pair";
            break;
        case PokerScore::ONE_PAIR:
            return "One Pair";
            break;
        case PokerScore::HIGH_CARD:
            return "High Card";
    }
}