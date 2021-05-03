#ifndef MEGAWAR_MEGADECK_H
#define MEGAWAR_MEGADECK_H

#include <stdio.h>
#include "CardPile.h"
#include "Card.h"


class MegaDeck : public CardPile{

public:
    MegaDeck(int num);
    Card deal();
    void display();
    void shuffle();
    int megaDeckSize();
    void addCard(Card card);
    Card removeCard();
    int pileSize();


};
#endif //MEGAWAR_MEGADECK_H
