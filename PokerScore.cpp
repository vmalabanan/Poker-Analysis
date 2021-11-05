#include "PokerScore.h"
#include <algorithm>

void PokerScore::operator +=(const Scores& score) {
    this->scores.push_back(score);
}

