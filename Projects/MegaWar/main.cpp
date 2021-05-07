#include <iostream>
#include "Card.h"
#include "CardPile.h"
#include "WarPile.h"
#include "LostAndFound.h"
#include "Deck.h"
#include "Player.h"
#include "MegaDeck.h"
#include <vector>
#include <map>
using namespace std;

int CardsLeft(vector<Player*>& playersList) { //checks if a player still has cards
    int temp = 0;
    for (auto & i : playersList) {
        temp = temp + i->playerLeftToPlay();

    }
    return temp;
}


void megaWar(vector<Player*>& playerWinners, LostAndFound& LostAndFound) {
    WarPile warPile;
//    int lostPileSize = LostAndFoundPileSize();
    int lostPileSize = LostAndFound.LostAndFoundPileSize();

    for(int i = 0; i < lostPileSize; i++){
        warPile.addCard(LostAndFound.deal()); //lostandfoundpile -> warpile
    }

    map<int, Card> cardsPlayed; // map card values of each player
    int highestCardValue = 0;

    vector<Player*> warWinners;
    int playerHandSize;
    for(auto & playerWinner : playerWinners){
        playerHandSize = playerWinner->cardsLeft();
        if(playerHandSize < 4){
            for(int i = 0; i < playerHandSize; i++){
                warPile.addCard(playerWinner->playerDeal());
            }
        }
    }
    vector<Player*>::iterator iter;
    iter = playerWinners.begin();
    while(iter != playerWinners.end()){
        if((*iter)->cardsLeft() == 0){ // no more cards
            playerWinners.erase(iter); // remove
        }else{
            iter++;
        }
    }
    for(auto & playerWinner : playerWinners){
        for (int j = 0; j < 3; j++) { // adding 3 cars to warPile
            warPile.addCard(playerWinner->playerDeal());
        }
    }

    for(auto & playerWinner : playerWinners){
        cardsPlayed[playerWinner->getPlayerPosition()] = playerWinner->playerDeal(); // fourth card to the CardPlayed for comparsin
    }
    map<int, Card>::iterator inter2;
    for(inter2 = cardsPlayed.begin(); inter2 != cardsPlayed.end(); inter2++){
        int value = inter2->second.getValue();
        if(value > highestCardValue){
            highestCardValue = value;
        }
    }
    for(inter2 = cardsPlayed.begin(); inter2 != cardsPlayed.end(); inter2++){ // person that has highest card wins
        if(inter2->second.getValue() == highestCardValue){
            for(auto & playerWinner : playerWinners){
                if(playerWinner->getPlayerPosition() == inter2->first){
                    warWinners.push_back(playerWinner); // add winner to winner list
                }
            }
        }
    }
    for(inter2 = cardsPlayed.begin(); inter2 != cardsPlayed.end(); inter2++){
        warPile.addCard(inter2->second);  //playedPile to Warpile
    }
    int warPileSize = warPile.warPileCardsLeft();
    int oneWinnerIndex = 0; // initailze to 0 default
    if(warWinners.size() == 1){ //checking to see how many winners there are if one that person wins
        warWinners[oneWinnerIndex]->battleWon(); // since 1 person left he wins the game
        for(int i = 0; i < warPileSize; i++) {
            warWinners[oneWinnerIndex]->addToBottom(warPile.deal());
        }
    }else{
        for(int i = 0; i < warPileSize; i++){
            LostAndFound.addCard(warPile.deal());
        }
        megaWar(warWinners, LostAndFound);
    }
}


int main() {
    int deckSize;
    int playerSize;
    vector<Player*> playersList;
    LostAndFound LostAndFound;

    cout << "How many decks to use : ";
    cin >> deckSize;
    cout << "How many players are there: ";
    cin >> playerSize;
    for(int i = 0; i < playerSize; i++){
        auto* player = new Player(i);
        playersList.push_back(player);
    }
    MegaDeck myDeck(deckSize);
    myDeck.shuffle();

    int deckSplit = myDeck.megaDeckSize() / playerSize;
    int cardRemainder = myDeck.megaDeckSize() % playerSize;
    for(int i = 0; i < playerSize; i++){
        for(int j = 0; j < deckSplit; j++){
            playersList[i]->add(myDeck.deal());
        }
    }
    while(cardRemainder > 0){
        playersList[0]->add(myDeck.deal());
        cardRemainder--;
    }

    int battlesPlayed = 1; // start at 1 since when you played a battle
    while (CardsLeft(playersList) > 1){

        map<int, Card> playerCardsPlayed; //to keep the players card value and which player played that cards

        vector<Player*> playerWinners; // vector of winners

        int highestCardValue = 0;

        for(auto & i : playersList){ //checking if player has cards left
            if(i->playerLeftToPlay() == 1){
                i->battlePlayed();
                playerCardsPlayed[i->getPlayerPosition()] = i->playerDeal(); // incremet number of battles if they had cards and dealed
            }
        }
        map<int, Card>::iterator iter; //mapping
        for(iter = playerCardsPlayed.begin(); iter != playerCardsPlayed.end(); iter++){
            int value = iter->second.getValue();
            if(value > highestCardValue){ //looking for highest card value
                highestCardValue = value;
            }
        }
        for(iter = playerCardsPlayed.begin(); iter != playerCardsPlayed.end(); iter++){
            if(iter->second.getValue() == highestCardValue){ //find highest card value
                playerWinners.push_back(playersList[iter->first]); //storing key value in vector
            }
        }
        int oneWinnerIndex = 0;
        if(playerWinners.size() == 1){
            playerWinners[oneWinnerIndex]->battleWon(); // add win to the Winner
            for(iter = playerCardsPlayed.begin(); iter != playerCardsPlayed.end(); iter++){
                playerWinners[oneWinnerIndex]->addToBottom(iter->second);
            }
        }else{ // war
            for(iter = playerCardsPlayed.begin(); iter != playerCardsPlayed.end(); iter++){
                LostAndFound.addCard(iter->second);
            }
            megaWar(playerWinners, LostAndFound);
        }
        cout << "Battle " << battlesPlayed++ << " stats: " << endl;
        for(auto & i : playersList){
            i->displayStats();
        }
    }
}