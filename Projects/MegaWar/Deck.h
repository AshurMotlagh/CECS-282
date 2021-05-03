#ifndef MEGAWAR_DECK_H
#define MEGAWAR_DECK_H

#include <stdio.h>
#include "CardPile.h"
#include "Card.h"

class Deck : public CardPile{
public:
    Deck();
    Card deal();
    void display();
    void shuffle();
    int pileSize();
    Card removeCard();
    void addCard(Card card);

};


#endif //MEGAWAR_DECK_H
