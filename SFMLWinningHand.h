//
// Created by vanes on 10/28/2021.
//

#ifndef MAIN_CPP_SFMLWINNINGHAND_H
#define MAIN_CPP_SFMLWINNINGHAND_H
#include <SFML/Graphics.hpp>
#include "SFMLWinningHand.h"
#include "SFMLCard.h"
#include "PokerScore.h"

class SFMLWinningHand : public sf::Drawable {
public:
    // Constructors
    SFMLWinningHand();
    SFMLWinningHand(PokerScore::Scores hand);
    SFMLWinningHand(PokerScore::Scores hand, float positionX, float positionY); // for video, show this line before adding PokerScore::

    float getPositionX();
    float getPositionY();
    float getCardWidth();
    float getCardHeight();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates state) const;

private:
    SFMLCard card1;
    SFMLCard card2;
    SFMLCard card3;
    SFMLCard card4;
    SFMLCard card5;
    const int CARD_SPACING = 15;
};


#endif //MAIN_CPP_SFMLWINNINGHAND_H
