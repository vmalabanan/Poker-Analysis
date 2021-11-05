//
// Created by vanes on 10/23/2021.
//

#ifndef MAIN_CPP_SFMLRANK_H
#define MAIN_CPP_SFMLRANK_H
#include <SFML/Graphics.hpp>
#include "RanksEnum.h"
#include "SuitsEnum.h"

class SFMLRank : public sf::Drawable, public sf::Transformable  {

public:
    // Constructors
    SFMLRank();
    SFMLRank(RanksEnum rank, SuitsEnum suit); // Need suits to determine the rank color

    // Setters
    void setRank(RanksEnum rank, SuitsEnum suit); // Need suits to determine the rank color
    void setPositionRankUpper(float x, float y);
    void setPositionRankLower(float x, float y);

    // Getters
    float getPositionRankUpperX();
    float getPositionRankUpperY();
    float getPositionRankLowerX();
    float getPositionRankLowerY();


    virtual void draw(sf::RenderTarget &window, sf::RenderStates state) const;
private:
    sf::Font font;
    sf::Text rankUpper;
    sf::Text rankLower;

    std::string hoylePlayingCardFontKey(RanksEnum rank);
};


#endif //MAIN_CPP_SFMLRANK_H
