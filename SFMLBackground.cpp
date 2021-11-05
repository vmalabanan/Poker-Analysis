//
// Created by vanes on 10/23/2021.
//

#include "SFMLBackground.h"

SFMLBackground::SFMLBackground() {
    setBackground();
}

void SFMLBackground::setBackground() {
    // Default width/height, fill color = white
    this->setSize(sf::Vector2f(width, height));
    this->setFillColor(sf::Color(255, 255, 255));

}

void SFMLBackground::setBackground(float width, float height) {
    // Sets size = width and height.
    this->setSize(sf::Vector2f(width, height));
}


float SFMLBackground::getWidth() {
    return width;
}

float SFMLBackground::getHeight() {
    return height;
}

