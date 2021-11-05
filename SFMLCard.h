//
// Created by vanes on 10/23/2021.
//

#ifndef MAIN_CPP_SFMLCARD_H
#define MAIN_CPP_SFMLCARD_H
#include <SFML/Graphics.hpp>
#include "SFMLBackground.h"
#include "SFMLRank.h"
#include "SFMLSuit.h"
#include "RanksEnum.h"
#include "SuitsEnum.h"

class SFMLCard : public sf::Drawable {
public:
    // Constructors
    SFMLCard();
    SFMLCard(RanksEnum rank, SuitsEnum suit);
    SFMLCard(RanksEnum rank, SuitsEnum suit, float positionX, float positionY);

    void setCard(RanksEnum rank, SuitsEnum suit, float positionX, float positionY);
    void setRank(RanksEnum rank, SuitsEnum suit);
    void setSuit(SuitsEnum suit);
    void setBackground();

    void setPosition(float x, float y);
    float getPositionX();
    float getPositionY();

    float getWidth();
    float getHeight();

    // Function that must be declared/implemented for Card to be considered a child of sf::Drawable
    virtual void draw(sf::RenderTarget &window, sf::RenderStates state) const;

private:
    SFMLBackground background;
    SFMLRank rank;
    SFMLSuit suit;
};

#endif //MAIN_CPP_SFMLCARD_H
