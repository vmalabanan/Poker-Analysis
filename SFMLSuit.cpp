//
// Created by vanes on 10/23/2021.
//

#include "SFMLSuit.h"

SFMLSuit::SFMLSuit() {

}

SFMLSuit::SFMLSuit(SuitsEnum suit) {
    setSuit(suit);
}

void SFMLSuit::setSuit(SuitsEnum suit) {
    // Put this into its own function and call for this function and constructor.

    // Get file name for suit
    std::string fileName = convertSuitToFileName(suit);

    // Load texture from file
    texture.loadFromFile(fileName);

    // Smoothing a texture makes pixel boundaries less visible
    texture.setSmooth(true);

    // Creating sprite for suit in middle of card
    suitMiddle.setTexture(texture);
    // Scale = % of original size
    suitMiddle.scale(0.15, 0.15);

    // Creating sprite for suit in upper left corner of card by first setting equal to suitMiddle
    suitUpper = suitMiddle;
    // Scale = 5% of original size
    suitUpper.setScale(0.05, 0.05);

    // Creating sprite for suit in lower right of card by first setting equal to suitUpperLeft
    suitLower = suitUpper;
    // Rotating by 180 degrees
    suitLower.setRotation(180);
}

void SFMLSuit::setPositionSuitUpper(float x, float y) {
    suitUpper.setPosition(x, y);
}

void SFMLSuit::setPositionSuitLower(float x, float y) {
    suitLower.setPosition(x, y);
}

void SFMLSuit::setPositionSuitMiddle(float x, float y) {
    suitMiddle.setPosition(x, y);
}

void SFMLSuit::draw(sf::RenderTarget &window, sf::RenderStates state) const {
//    state = getTransform();
    window.draw(suitUpper);
    window.draw(suitLower);
    window.draw(suitMiddle);
}


std::string SFMLSuit::convertSuitToFileName(SuitsEnum suit) {
    switch (suit) {
        case HEARTS:
            return "suit-hearts.png";
            break;
        case DIAMONDS:
            return "suit-diamonds.png";
            break;
        case CLUBS:
            return "suit-clubs.png";
            break;
        case SPADES:
            return "suit-spades.png";
    }
}