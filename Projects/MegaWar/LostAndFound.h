#ifndef MEGAWAR_LOSTANDFOUND_H
#define MEGAWAR_LOSTANDFOUND_H

#include <stdio.h>
#include "CardPile.h"
#include "Card.h"

class LostAndFound : public CardPile{
public:
    int LostAndFoundPileSize();
    Card deal();
};
#endif //MEGAWAR_LOSTANDFOUND_H
