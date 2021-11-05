//
// Created by vanes on 10/28/2021.
//

#include "SFMLWinningHand.h"

SFMLWinningHand::SFMLWinningHand() {

}

SFMLWinningHand::SFMLWinningHand(PokerScore::Scores hand) : SFMLWinningHand(hand, 0, 0) {
    // Intentionally blank

}

SFMLWinningHand::SFMLWinningHand(PokerScore::Scores hand, float positionX, float positionY) {
     switch (hand) {
         case PokerScore::ROYAL_FLUSH:
            card1.setCard(TEN, SPADES, positionX, positionY);
            card2.setCard(JACK, SPADES, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(QUEEN, SPADES, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(KING, SPADES, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(ACE, SPADES, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::STRAIGHT_FLUSH:
            card1.setCard(FIVE, DIAMONDS, positionX, positionY);
            card2.setCard(SIX, DIAMONDS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(SEVEN, DIAMONDS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(EIGHT, DIAMONDS, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(NINE, DIAMONDS, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::FOUR_OF_A_KIND:
            card1.setCard(QUEEN, CLUBS, positionX, positionY);
            card2.setCard(QUEEN, SPADES, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(QUEEN, HEARTS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(QUEEN, DIAMONDS, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(NINE, CLUBS, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::FULL_HOUSE:
            card1.setCard(TWO, HEARTS, positionX, positionY);
            card2.setCard(TWO, DIAMONDS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(JACK, HEARTS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(JACK, SPADES, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(JACK, DIAMONDS, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::FLUSH:
            card1.setCard(THREE, CLUBS, positionX, positionY);
            card2.setCard(FOUR, CLUBS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(SEVEN, CLUBS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(NINE, CLUBS, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(KING, CLUBS, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::STRAIGHT:
            card1.setCard(TWO, HEARTS, positionX, positionY);
            card2.setCard(THREE, CLUBS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(FOUR, HEARTS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(FIVE, SPADES, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(SIX, DIAMONDS, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::THREE_OF_A_KIND:
            card1.setCard(EIGHT, SPADES, positionX, positionY);
            card2.setCard(EIGHT, DIAMONDS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(EIGHT, HEARTS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(JACK, CLUBS, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(QUEEN, DIAMONDS, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::TWO_PAIR:
            card1.setCard(TEN, CLUBS, positionX, positionY);
            card2.setCard(TEN, HEARTS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(QUEEN, HEARTS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(QUEEN, DIAMONDS, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(ACE, SPADES, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::ONE_PAIR:
            card1.setCard(SEVEN, DIAMONDS, positionX, positionY);
            card2.setCard(SEVEN, CLUBS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(FOUR, HEARTS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(SIX, SPADES, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(TEN, DIAMONDS, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
            break;
        case PokerScore::HIGH_CARD:
            card1.setCard(FIVE, HEARTS, positionX, positionY);
            card2.setCard(NINE, CLUBS, card1.getPositionX() + card1.getWidth() + CARD_SPACING, card1.getPositionY());
            card3.setCard(TEN, HEARTS, card2.getPositionX() + card2.getWidth() + CARD_SPACING, card2.getPositionY());
            card4.setCard(JACK, DIAMONDS, card3.getPositionX() + card3.getWidth() + CARD_SPACING, card3.getPositionY());
            card5.setCard(QUEEN, SPADES, card4.getPositionX() + card4.getWidth() + CARD_SPACING, card4.getPositionY());
 }
}


float SFMLWinningHand::getPositionX() {
    return card1.getPositionX();
}

float SFMLWinningHand::getPositionY() {
    return card1.getPositionY();
}

float SFMLWinningHand::getCardWidth() {
    return card1.getWidth();
}

float SFMLWinningHand::getCardHeight() {
    return card1.getHeight();
}

void SFMLWinningHand::draw(sf::RenderTarget &window, sf::RenderStates state) const {
    window.draw(card1);
    window.draw(card2);
    window.draw(card3);
    window.draw(card4);
    window.draw(card5);

}