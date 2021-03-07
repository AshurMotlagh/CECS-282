#ifndef CECS_282_DECK_H
#define CECS_282_DECK_H
#include "Card.h"

class Deck {
private:
    Card storage[52];

    int topCard;

public:
    Deck();
    void refreshDeck();
    Card deal();
    void shuffle();
    int cardsLeft();
    void showDeck();
};


#endif //CECS_282_DECK_H
