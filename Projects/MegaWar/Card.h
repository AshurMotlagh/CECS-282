#ifndef MEGAWAR_CARD_H
#define MEGAWAR_CARD_H

#include <stdio.h>

enum suits {Diamond, Heart, Spade, Club};
enum ranks {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};

class Card {
private:
    suits suit;
    ranks rank;

public:
    Card();
    Card(ranks r, suits s);
    void display();
    int getValue() const;
};


#endif //MEGAWAR_CARD_H
