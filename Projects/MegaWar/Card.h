#ifndef MEGAWAR_CARD_H
#define MEGAWAR_CARD_H

#include <stdio.h>

enum suits {DIAMOND, HEART, SPADE, CLUB};
enum ranks {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

class Card {
private:
    suits suit;
    ranks rank;

public:
    Card();
    Card(ranks r, suits s);
    void display();
    int cardCompare(Card card2);
    int getValue() const;

};


#endif //MEGAWAR_CARD_H
