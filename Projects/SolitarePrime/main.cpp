#include <iostream>
#include "Card.h"
#include "Deck.h"
using namespace std;

int menu(){
    int option;
    cout<<("\nWelcome to Solitaire Prime! \n---------------------------- \n1. New Deck \n2. Display Deck \n3. Shuffle Deck \n4. Play Solitaire Prime \n5. Exit")<<endl;
    cout<<("Please select the operation: ");
    cin>>option;
    cout<<("----------------------------")<<endl;
    return option;
}

bool isPrime(int num){
    if (num == 1)
        return false;
    for (int i = 2; i<= num /2; i++){
        if (num % i ==0){
            return false;
        }
    }
    return true;
}

void play(Deck deck){
    int pile = 0;

    for (int i =0; i< 52; i++){
        Card c = deck.deal();
        c.showCard();
        cout<<", ";
        pile += c.getValue();

        if (isPrime(pile)){
            cout<<"Prime: "<<pile<<endl;
            pile = 0;
        }
    }
    if (pile==0 && deck.cardsLeft() ==0)
        cout<<"you win" <<endl;
    else
        cout<<"you lose"<<endl;
}


int main(){
    int choice;
    Deck myDeck;

    do{
        choice = menu();

        switch(choice){
            case 1:
                myDeck.refreshDeck();
                break;
            case 2:
                myDeck.showDeck();
                break;
            case 3:
                myDeck.shuffle();
                break;
            case 4:
                play(myDeck);
                break;
        }
    } while (choice !=5);
    cout<< ("Thank you for playing the game")<<endl;

    return 0;
}