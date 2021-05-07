#include "Player.h"
#include "CardPile.h"
#include "Card.h"
#include <iomanip>

Player :: Player(int num){
    playerPosition = num;
    battle = 0;
    won = 0;
}

void Player :: displayStats(){
    display();
}

void Player :: display(){ //had to add an display function different from cardpile
    cout << setw(3) << left << "Player " << setw(3) << getPlayerPosition() + 1 << ": Fierceness: "  << setprecision(3) << setw(5) << Fierceness() << " Cards: " << setw(5) << pileSize() << " Battles: " << setw(5) << getBattle() << " Wins: " << getVictory() << endl;
}

void Player :: add(Card card){ //add card
    addCard(card);
}

int Player :: cardsLeft(){
    return (int)pileSize();
}

Card Player :: playerDeal(){
    Card playerCard = removeCard();
    return playerCard;
}

double Player :: Fierceness(){
    double sum = 0.0;
    double size = pileSize();
    if(size == 0){
        return 0;
    }
    for(int i = 0; i < size; i++){
        sum = sum + this->pile[i].getValue();
    }

    return (sum / size);
}

int Player :: playerLeftToPlay(){
    if(pileSize() > 0){
        return 1;
    }
    return 0;
}

void Player :: addToBottom(Card card) { //adds card to bottom of hand
    pile.insert(pile.begin(), card);
}

int Player :: getPlayerPosition() const {
    return playerPosition;
}
int Player :: getBattle() const{
    return battle;
}
int Player :: getVictory() const{
    return won;
}

void Player :: battlePlayed(){
    battle++;
}

void Player :: battleWon(){
    won++;
}
