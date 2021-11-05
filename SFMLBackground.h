//
// Created by vanes on 10/23/2021.
//

#ifndef MAIN_CPP_SFMLBACKGROUND_H
#define MAIN_CPP_SFMLBACKGROUND_H
#include <SFML/Graphics.hpp>

class SFMLBackground : public sf::RectangleShape {
public:
    // Constructors
    SFMLBackground();
    SFMLBackground(float width, float height);

    // Setters
    void setBackground();
    void setBackground(float width, float height);

    // Getters
    float getWidth();
    float getHeight();

private:
    float width = 88, height = 120; // Default width/height
};


#endif //MAIN_CPP_SFMLBACKGROUND_H
