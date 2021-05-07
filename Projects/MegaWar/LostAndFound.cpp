#include "LostAndFound.h"
#include "CardPile.h"
#include "Card.h"
//#include "Deck.h"

Card LostAndFound :: deal(){
    return removeCard();
}

int LostAndFound :: LostAndFoundPileSize(){
    return pileSize();
}

