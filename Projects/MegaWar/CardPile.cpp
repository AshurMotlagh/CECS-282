//
// Created by ashur on 5/2/2021.
//
#include <iostream>
#include "CardPile.h"
#include "Card.h"
#include <vector>
using namespace std;

void CardPile :: addCard(Card card){
    pile.push_back(card);
}

Card CardPile :: removeCard(){
    Card temp = pile[pile.size() - 1];
    pile.pop_back();
    return temp;
}

void CardPile :: display(){
    for(int i = 0; i < pile.size(); i++){
        if(i != 0 && i % 13 == 0){
            cout << endl;
        }
        pile[i].display();
    }
}

int CardPile :: pileSize(){
    return (int)pile.size();
}