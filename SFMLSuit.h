//
// Created by vanes on 10/23/2021.
//

#ifndef MAIN_CPP_SFMLSUIT_H
#define MAIN_CPP_SFMLSUIT_H
#include <SFML/Graphics.hpp>
#include "SuitsEnum.h"

class SFMLSuit : public sf::Drawable, public sf::Transformable  {
public:
    // Constructors
    SFMLSuit();
    SFMLSuit(SuitsEnum suit);

    // Setters
    void setSuit(SuitsEnum suit);

    void setPositionSuitUpper(float x, float y);
    void setPositionSuitLower(float x, float y);
    void setPositionSuitMiddle(float x, float y);

    virtual void draw(sf::RenderTarget &window, sf::RenderStates state) const;
    void center(sf::FloatRect bound);

private:
    sf::Texture texture;
    sf::Sprite suitUpper;
    sf::Sprite suitLower;
    sf::Sprite suitMiddle;

    std::string convertSuitToFileName(SuitsEnum suit);
};


#endif //MAIN_CPP_SFMLSUIT_H
