#ifndef MEGAWAR_DECK_H
#define MEGAWAR_DECK_H

#include <stdio.h>
#include<time.h>
#include "CardPile.h"
#include "Card.h"

class Deck : public CardPile{
public:
    Deck();
    Card deal();
};
#endif //MEGAWAR_DECK_H
