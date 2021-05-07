#include "MegaDeck.h"
#include "CardPile.h"
#include "Card.h"
#include "Deck.h"

MegaDeck :: MegaDeck(int num){
    while(num > 0){
        Deck temp;
        while(temp.pileSize() > 0){
            this->addCard(temp.deal());
        }
        num--;
    }
}

Card MegaDeck :: deal(){
    Card temp = removeCard();
    return temp;
}

void MegaDeck :: shuffle(){
    srand(time(NULL));
    for(int i = 0; i < megaDeckSize(); i++){
        int num = rand() % megaDeckSize();
        Card temp = pile[i];
        pile[i] = pile[num];
        pile[num] = temp;
    }
}

int MegaDeck :: megaDeckSize(){
    return pileSize();
}
