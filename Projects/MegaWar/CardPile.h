#ifndef MEGAWAR_CARDPILE_H
#define MEGAWAR_CARDPILE_H

#include <stdio.h>
#include <vector>
#include "Card.h"
#include <iostream>
using namespace std;

class CardPile {
protected:
    vector<Card> pile;

public:  // changed from a abstract base class to a normal one
    Card removeCard();
    void addCard(Card card);
    void display();
    int pileSize() ;
};
#endif //MEGAWAR_CARDPILE_H
