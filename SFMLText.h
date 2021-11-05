//
// Created by vanes on 10/28/2021.
//

#ifndef MAIN_CPP_SFMLTEXT_H
#define MAIN_CPP_SFMLTEXT_H
#include <SFML/Graphics.hpp>

class SFMLText : public sf::Drawable {
public:
    SFMLText();
    SFMLText(std::string text);
    SFMLText(std::string text, unsigned int size, float positionX, float positionY);

    float getPositionX();
    float getPositionY();
    void draw(sf::RenderTarget &window, sf::RenderStates state) const;

private:
    sf::Font font;
    sf::Text text;

};


#endif //MAIN_CPP_SFMLTEXT_H
