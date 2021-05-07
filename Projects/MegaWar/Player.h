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
    Card playerDeal();
    void display();
    void add(Card card);
    void battlePlayed();
    void battleWon();
    void addToBottom(Card card);
    void displayStats();
    int cardsLeft();
    int getBattle() const;
    int getVictory() const;
    int playerLeftToPlay();
    int getPlayerPosition() const;
    double Fierceness();
};
#endif //MEGAWAR_PLAYER_H
