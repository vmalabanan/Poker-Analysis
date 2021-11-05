//
// Created by vanes on 10/28/2021.
//

#include "SFMLText.h"

SFMLText::SFMLText() {

}

SFMLText::SFMLText(std::string text) : SFMLText(text, 40, 0, 0){
    // Intentionally blank
}

SFMLText::SFMLText(std::string text, unsigned int size, float positionX, float positionY) {
    // Load font from file
    if (!font.loadFromFile("Roboto-Medium.ttf"))
        exit(2);

    this->text = sf::Text(text, font, size);
    this->text.setFillColor(sf::Color(255, 255, 255));
    this->text.setPosition(positionX, positionY);
}

float SFMLText::getPositionX() {
    return text.getPosition().x;
}

float SFMLText::getPositionY() {
    return text.getPosition().y;
}



void SFMLText::draw(sf::RenderTarget &window, sf::RenderStates state) const {
    window.draw(text);
}