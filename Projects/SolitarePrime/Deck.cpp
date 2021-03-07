#include "Deck.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Deck::Deck() { //modified code from java
    int cnt = 0;
    topCard = 0;

    char suit[4] = {'S','H','D','C'};
    char ranks[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

    for (char s : suit){  //improved to a for each loop
        for (char r : ranks){
            storage[cnt].setCard(r, s);
            cnt++;
        }
    }
}

void Deck::refreshDeck() { //Same as building a new deck!!!
    int cnt = 0;
    topCard = 0;

    char suit[4] = {'S','H','D','C'};
    char ranks[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

    for (char s : suit){
        for (char r : ranks){
            storage[cnt].setCard(r, s);
            cnt++;
        }
    }
}

Card Deck::deal() {
    return storage[topCard++];
}

void Deck::shuffle() {
    srand(time(0));
    for(int i = 0; i < 52; i++){
        int card = rand() % 52;
        Card temp = storage[i];
        storage[i] = storage[card];
        storage[card] = temp;
    }
}

int Deck::cardsLeft() {
    return 52 - topCard;
}

void Deck::showDeck() {
    for (int i = 0; i < 52; i++) {
        if (i % 13 == 0)
            std::cout << std::endl;
        storage[i].showCard();
        std::cout<<", ";
    }
    std::cout << std::endl;

}
