#ifndef MEGAWAR_MEGADECK_H
#define MEGAWAR_MEGADECK_H

#include <stdio.h>
#include "CardPile.h"
#include "Card.h"

class MegaDeck : public CardPile{

public:
    MegaDeck(int num);
    Card deal();
    void shuffle();
    int megaDeckSize();
};

#endif //MEGAWAR_MEGADECK_H
