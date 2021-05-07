#include "Deck.h"
#include "CardPile.h"
#include "Card.h"

Deck :: Deck(){
    for(suits s = Diamond; s <= Club; s = suits(s + 1)){
        for(ranks r = Ace; r <= King; r = ranks(r + 1)){
            Card card(r,s);
            addCard(card);
        }
    }
}

Card Deck :: deal(){
    return removeCard();
}
