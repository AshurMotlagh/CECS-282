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

public:
    virtual void addCard(Card card) = 0;
    virtual Card removeCard() = 0;
    virtual void display() = 0;
    virtual int pileSize() = 0;
};


#endif //MEGAWAR_CARDPILE_H
