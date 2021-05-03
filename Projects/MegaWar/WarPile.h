#ifndef MEGAWAR_WARPILE_H
#define MEGAWAR_WARPILE_H

#include <stdio.h>
#include "CardPile.h"
#include "Card.h"


class WarPile : public CardPile {

public:
    void addCard(Card card);
    Card removeCard();
    void display();
    int warPileCardsLeft();
    int pileSize();
    Card deal();
};

#endif //MEGAWAR_WARPILE_H
