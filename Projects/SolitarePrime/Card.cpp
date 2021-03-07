#include <iostream>
#include "Card.h"

Card::Card() {

}

Card::Card(char r, char s) {

    suit = s;
    rank = r;
}

void Card::setCard(char r, char s) {
    rank = r;
    suit = s;
}

int Card::getValue() {
    if (rank == 'T' || rank == 'J' || rank == 'K' || rank == 'Q') {
        return 10;
    } else if (rank == 'A'){
        return 1;
    } else{
        int num = rank;
        return num - 48;
    }
}

void Card::showCard() {
    if (rank =='T'){
        std::cout<<"10"<<suit;
    } else{
        std::cout<<rank<<suit;
    }