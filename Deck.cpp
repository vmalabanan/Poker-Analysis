#include "Deck.h"

int Deck::cardIndex = 0; // Initialize cardIndex

Deck::Deck() {
    deck[0] = Card(ACE, HEARTS);
    deck[1] = Card(ACE, DIAMONDS);
    deck[2] = Card(ACE, SPADES);
    deck[3] = Card(ACE, CLUBS);

    deck[4] = Card(TWO, HEARTS);
    deck[5] = Card(TWO, DIAMONDS);
    deck[6] = Card(TWO, SPADES);
    deck[7] = Card(TWO, CLUBS);

    deck[8] = Card(THREE, HEARTS);
    deck[9] = Card(THREE, DIAMONDS);
    deck[10] = Card(THREE, SPADES);
    deck[11] = Card(THREE, CLUBS);

    deck[12] = Card(FOUR, HEARTS);
    deck[13] = Card(FOUR, DIAMONDS);
    deck[14] = Card(FOUR, SPADES);
    deck[15] = Card(FOUR, CLUBS);

    deck[16] = Card(FIVE, HEARTS);
    deck[17] = Card(FIVE, DIAMONDS);
    deck[18] = Card(FIVE, SPADES);
    deck[19] = Card(FIVE, CLUBS);

    deck[20] = Card(SIX, HEARTS);
    deck[21] = Card(SIX, DIAMONDS);
    deck[22] = Card(SIX, SPADES);
    deck[23] = Card(SIX, CLUBS);

    deck[24] = Card(SEVEN, HEARTS);
    deck[25] = Card(SEVEN, DIAMONDS);
    deck[26] = Card(SEVEN, SPADES);
    deck[27] = Card(SEVEN, CLUBS);

    deck[28] = Card(EIGHT, HEARTS);
    deck[29] = Card(EIGHT, DIAMONDS);
    deck[30] = Card(EIGHT, SPADES);
    deck[31] = Card(EIGHT, CLUBS);

    deck[32] = Card(NINE, HEARTS);
    deck[33] = Card(NINE, DIAMONDS);
    deck[34] = Card(NINE, SPADES);
    deck[35] = Card(NINE, CLUBS);

    deck[36] = Card(TEN, HEARTS);
    deck[37] = Card(TEN, DIAMONDS);
    deck[38] = Card(TEN, SPADES);
    deck[39] = Card(TEN, CLUBS);

    deck[40] = Card(JACK, HEARTS);
    deck[41] = Card(JACK, DIAMONDS);
    deck[42] = Card(JACK, SPADES);
    deck[43] = Card(JACK, CLUBS);

    deck[44] = Card(QUEEN, HEARTS);
    deck[45] = Card(QUEEN, DIAMONDS);
    deck[46] = Card(QUEEN, SPADES);
    deck[47] = Card(QUEEN, CLUBS);

    deck[48] = Card(KING, HEARTS);
    deck[49] = Card(KING, DIAMONDS);
    deck[50] = Card(KING, SPADES);
    deck[51] = Card(KING, CLUBS);
    }

void Deck::shuffle() {
    int j;
    for (int i = 0; i < DECK_SIZE; ++i) {
        j = rand() % 52;
        swap(i, j);
    }
}

void Deck::dealCard(CardHand& cardHand) {
    if (cardIndex > 51)
    {
        cardIndex = 0;
        this->shuffle();
        cardHand.hand.push_back(deck[cardIndex]);
        cardIndex++;
    }

    else
    {
        cardHand.hand.push_back(deck[cardIndex]);
        cardIndex++;
    }
}

std::ostream& operator <<(std::ostream& outs, const Deck& deck) {
    for (int i = 0; i < Deck::DECK_SIZE; ++i) {
        outs << deck.deck[i];
    }
}

void Deck::swap(int position1, int position2) {
    // Declare a temp Deck object and make first card of deck = to position1 card
    Deck temp;
    temp.deck[0] = deck[position1];
    // Swap position1 and position2
    deck[position1] = deck[position2];
    // Set position2 = first card of temp
    deck[position2] = temp.deck[0];
}