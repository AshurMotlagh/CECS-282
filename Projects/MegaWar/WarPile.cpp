#include "WarPile.h"
#include "CardPile.h"
#include "Card.h"

int WarPile :: warPileCardsLeft(){
    return pileSize();
}

Card WarPile :: deal(){  // dealing needs to remove a card
    return removeCard();
}