#ifndef MEGAWAR_LOSTANDFOUND_H
#define MEGAWAR_LOSTANDFOUND_H

#include <stdio.h>
#include "CardPile.h"

class LostAndFound {
public:
    void addCard(Card card);
    Card removeCard();
    void display();
    int LostAndFoundPileSize();
    int pileSize();
    Card deal();
};


#endif //MEGAWAR_LOSTANDFOUND_H
