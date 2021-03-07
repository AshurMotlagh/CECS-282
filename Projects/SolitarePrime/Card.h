#ifndef CECS_282_CARD_H
#define CECS_282_CARD_H

class Card {
private:
    char suit;
    char rank;

public:
    Card();
    Card(char r, char s);
    void setCard(char r, char s);
    int getValue();
    void showCard();
};


#endif //CECS_282_CARD_H
