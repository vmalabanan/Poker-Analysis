#include <iostream>
#include "PokerHandProbability.h"
#include "SFMLCard.h"
#include "SFMLWinningHand.h"
#include "SFMLText.h"

int main() {
    std::vector<std::string> odds = pokerHandProbability();

    // Window width and height
    int windowWidth = 1580, windowHeight = 900;
    // Render window
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight, 32), "Poker Hand Odds");

    // Create winning hand objects
    int verticalSpacing = 40;
    int middleSpacing = 300;
    int cardSpacing = 15;

    SFMLWinningHand rf(PokerScore::ROYAL_FLUSH, 30, 100);
    SFMLWinningHand sf(PokerScore::STRAIGHT_FLUSH, rf.getPositionX(), rf.getPositionY() + rf.getCardHeight() + verticalSpacing);
    SFMLWinningHand fk(PokerScore::FOUR_OF_A_KIND, rf.getPositionX(), rf.getPositionY() + 2 * (rf.getCardHeight() + verticalSpacing));
    SFMLWinningHand fh(PokerScore::FULL_HOUSE, rf.getPositionX(), rf.getPositionY() + 3 * (rf.getCardHeight() + verticalSpacing));
    SFMLWinningHand f(PokerScore::FLUSH, rf.getPositionX(), rf.getPositionY() + 4 * (rf.getCardHeight() + verticalSpacing));
    SFMLWinningHand s(PokerScore::STRAIGHT, rf.getPositionX() + 5 * (rf.getCardWidth() + cardSpacing) + middleSpacing, rf.getPositionY());
    SFMLWinningHand tk(PokerScore::THREE_OF_A_KIND, s.getPositionX(), rf.getPositionY() + rf.getCardHeight() + verticalSpacing);
    SFMLWinningHand tp(PokerScore::TWO_PAIR, s.getPositionX(), rf.getPositionY() + 2 * (rf.getCardHeight() + verticalSpacing));
    SFMLWinningHand op(PokerScore::ONE_PAIR, s.getPositionX(), rf.getPositionY() + 3 * (rf.getCardHeight() + verticalSpacing));
    SFMLWinningHand hc(PokerScore::HIGH_CARD, s.getPositionX(), rf.getPositionY() + 4 * (rf.getCardHeight() + verticalSpacing));

    // Create text objects
    int subTitleSize = 25;
    int oddsSize = 19;
    int subTitleSpacing = 25;
    int oddsSpacing = 35;

    SFMLText title("Poker Hand Odds", 50, 585, 10);

    SFMLText rfText("Royal Flush", subTitleSize, rf.getPositionX() + 5 * (rf.getCardWidth() + cardSpacing) + cardSpacing, rf.getPositionY() + subTitleSpacing);
    SFMLText rfOdds(odds[0], oddsSize, rfText.getPositionX(), rfText.getPositionY() + oddsSpacing);

    SFMLText sfText("Straight Flush", subTitleSize, rfText.getPositionX(), sf.getPositionY() + subTitleSpacing);
    SFMLText sfOdds(odds[1], oddsSize, rfText.getPositionX(), sfText.getPositionY() + oddsSpacing);

    SFMLText fkText("Four of a Kind", subTitleSize, rfText.getPositionX(), fk.getPositionY() + subTitleSpacing);
    SFMLText fkOdds(odds[2], oddsSize, rfText.getPositionX(), fkText.getPositionY() + oddsSpacing);

    SFMLText fhText("Full House", subTitleSize, rfText.getPositionX(), fh.getPositionY() + subTitleSpacing);
    SFMLText fhOdds(odds[3], oddsSize, rfText.getPositionX(), fhText.getPositionY() + oddsSpacing);

    SFMLText fText("Flush", subTitleSize, rfText.getPositionX(), f.getPositionY() + subTitleSpacing);
    SFMLText fOdds(odds[4], oddsSize, rfText.getPositionX(), fText.getPositionY() + oddsSpacing);

    SFMLText sText("Straight", subTitleSize, rfText.getPositionX() + 5 * (rf.getCardWidth() + cardSpacing) + middleSpacing, rf.getPositionY() + subTitleSpacing);
    SFMLText sOdds(odds[5], oddsSize, sText.getPositionX(), sText.getPositionY() + oddsSpacing);

    SFMLText tkText("Three of a Kind", subTitleSize, sText.getPositionX(), tk.getPositionY() + subTitleSpacing);
    SFMLText tkOdds(odds[6], oddsSize, sText.getPositionX(), tkText.getPositionY() + oddsSpacing);

    SFMLText tpText("Two Pair", subTitleSize, sText.getPositionX(), tp.getPositionY() + subTitleSpacing);
    SFMLText tpOdds(odds[7], oddsSize, sText.getPositionX(), tpText.getPositionY() + oddsSpacing);

    SFMLText opText("One Pair", subTitleSize, sText.getPositionX(), op.getPositionY() + subTitleSpacing);
    SFMLText opOdds(odds[8], oddsSize, sText.getPositionX(), opText.getPositionY() + oddsSpacing);

    SFMLText hcText("High Card", subTitleSize, sText.getPositionX(), hc.getPositionY() + subTitleSpacing);
    SFMLText hcOdds(odds[9], oddsSize, sText.getPositionX(), hcText.getPositionY() + oddsSpacing);

    // Start of main game loop
    while(window.isOpen())
    {
        window.draw(rf);
        window.draw(sf);
        window.draw(fk);
        window.draw(fh);
        window.draw(f);
        window.draw(s);
        window.draw(tk);
        window.draw(tp);
        window.draw(op);
        window.draw(hc);

        window.draw(title);
        window.draw(rfText);
        window.draw(rfOdds);
        window.draw(sfText);
        window.draw(sfOdds);
        window.draw(fkText);
        window.draw(fkOdds);
        window.draw(fhText);
        window.draw(fhOdds);
        window.draw(fText);
        window.draw(fOdds);
        window.draw(sText);
        window.draw(sOdds);
        window.draw(tkText);
        window.draw(tkOdds);
        window.draw(tpText);
        window.draw(tpOdds);
        window.draw(opText);
        window.draw(opOdds);
        window.draw(hcText);
        window.draw(hcOdds);

        window.display();
        window.clear(sf::Color(84, 130, 53)); // Fill window with a green color

        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
    }

   return 0;
}
