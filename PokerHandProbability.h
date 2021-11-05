#ifndef MAIN_CPP_POKERHANDPROBABILITY_H
#define MAIN_CPP_POKERHANDPROBABILITY_H
#include "CardHand.h"
#include "PokerScore.h"

std::vector<std::string> pokerHandProbability();
CardHand chooseRandomHand(CardHand hand1, CardHand hand2, CardHand hand3, CardHand hand4, CardHand hand5);

int countScores(std::vector<PokerScore::Scores> scores, PokerScore::Scores hand);
void displayCount(const std::vector<PokerScore::Scores> scores, PokerScore::Scores hand);
void displayOdds(const std::vector<PokerScore::Scores> scores, PokerScore::Scores hand);
std::string oddsToString(const std::vector<PokerScore::Scores> scores, PokerScore::Scores hand);
std::string scoreToString(PokerScore::Scores score);

const int NUMBER_OF_LOOPS = 1000000;

#endif //MAIN_CPP_POKERHANDPROBABILITY_H
