#ifndef MEGAWAR_WARPILE_H
#define MEGAWAR_WARPILE_H

#include <stdio.h>
#include "CardPile.h"
#include "Card.h"

class WarPile : public CardPile {

public:
    int warPileCardsLeft();
    Card deal();
};
#endif //MEGAWAR_WARPILE_H
