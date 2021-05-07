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
    void display();
    Player(int num);
    void add(Card card);
    int cardsLeft();
    Card playerDeal();
    void displayStats();
    double Fierceness();
    void battlePlayed();
    void battleWon();
    int getBattle() const;
    int getVictory() const;
    int playerLeftToPlay();
    void addToBottom(Card card);
    int getPlayerPosition() const;
};


#endif //MEGAWAR_PLAYER_H
