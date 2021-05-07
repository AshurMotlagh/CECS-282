#include "Card.h"
#include <iostream>
using namespace std;


Card :: Card(){
    suit = Diamond;
    rank = Ace;
}

Card :: Card(ranks r, suits s){
    suit = s;
    rank = r;

}

int Card :: getValue() const{

    if(Ace == this->rank){
        return 1;
    }
    else if(Two == this->rank){
        return 2;
    }
    else if(Three == this->rank){
        return 3;
    }
    else if(Four == this->rank){
        return 4;
    }
    else if(Five == this->rank){
        return 5;
    }
    else if(Six == this->rank){
        return 6;
    }
    else if(Seven == this->rank){
        return 7;
    }
    else if(Eight == this->rank){
        return 8;
    }
    else if(Nine == this->rank){
        return 9;
    }
    else if(Ten == this->rank){
        return 10;
    }
    else if(Jack == this->rank){
        return 11;
    }
    else if(Queen == this->rank){
        return 12;
    }
    else{
        return 13;
    }
}

void Card :: display(){
    string rankNum = " ";
    string suitType = " ";

    if(Diamond == this->suit){
        suitType = "D";
    }
    else if(Club == this->suit){
        suitType = "C";
    }
    else if(Spade == this->suit){
        suitType = "S";
    }
    else if(Heart == this->suit){
        suitType = "H";
    }

    if(Ace == this->rank){
        rankNum = "A";
    }
    else if(Two == this->rank){
        rankNum = "2";
    }
    else if(Three == this->rank){
        rankNum = "3";
    }
    else if(Four == this->rank){
        rankNum = "4";
    }
    else if(Five == this->rank){
        rankNum = "5";
    }
    else if(Six == this->rank){
        rankNum = "6";
    }
    else if(Seven == this->rank){
        rankNum = "7";
    }
    else if(Eight == this->rank){
        rankNum = "8";
    }
    else if(Nine == this->rank){
        rankNum = "9";
    }
    else if(Ten == this->rank){
        rankNum = "10";
    }
    else if(Jack == this->rank){
        rankNum = "J";
    }
    else if(Queen == this->rank){
        rankNum = "Q";
    }
    else if(King == this->rank){
        rankNum = "K";
    }
    cout << rankNum << suitType << " ";
}

