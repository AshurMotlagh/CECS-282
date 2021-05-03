#ifndef MEGAWAR_PLAYER_H
#define MEGAWAR_PLAYER_H

#include <stdio.h>
#include "CardPile.h"
#include "Card.h"


class Player : public CardPile{
private:
    int playerPosition;
    int battle;
    int won;

public:
    Player(int num);
    void add(Card card);
    void addCard(Card card);
    int cardsLeft();
    Card playerDeal();
    Card removeCard();
    void display();
    void displayStats();
    double Fierceness();
    int playerHandSize();
    void battlePlayed();
    void battleWon();
    int getBattle() const;
    int getVictory() const;
    int topCard();
    int pileSize();
    int playerLeftToPlay();
    void addToBottom(Card card);
    int getPlayerPosition() const;
};


#endif //MEGAWAR_PLAYER_H
