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

int CardsLeft(vector<Player*>& ListOfPlayers) { //checks if a player still has cards
    int temp = 0;
    for (auto & i : ListOfPlayers) {
        temp = temp + i->playerLeftToPlay();

    }
    return temp;
}


void megaWar(vector<Player*>& Winners, LostAndFound& LostAndFound) {
    WarPile warPile;
//    int lostPileSize = LostAndFoundPileSize();
    int lostPileSize = LostAndFound.LostAndFoundPileSize();

    for(int i = 0; i < lostPileSize; i++){
        warPile.addCard(LostAndFound.deal()); //lostandfoundpile -> warpile
    }

    map<int, Card> cardsPlayed; // map card values of each player
    int highestCard = 0;

    vector<Player*> warWinners;
    int handSize;
    for(auto & playerWinner : Winners){
        handSize = playerWinner->cardsLeft();
        if(handSize < 4){
            for(int i = 0; i < handSize; i++){
                warPile.addCard(playerWinner->playerDeal());
            }
        }
    }
    vector<Player*>::iterator iter;
    iter = Winners.begin();
    while(iter != Winners.end()){
        if((*iter)->cardsLeft() == 0){ // no more cards
            Winners.erase(iter); // remove
        }else{
            iter++;
        }
    }
    for(auto & playerWinner : Winners){
        for (int j = 0; j < 3; j++) { // adding 3 cars to warPile
            warPile.addCard(playerWinner->playerDeal());
        }
    }

    for(auto & playerWinner : Winners){
        cardsPlayed[playerWinner->getPlayerPosition()] = playerWinner->playerDeal(); // fourth card to the CardPlayed for comparsin
    }
    map<int, Card>::iterator inter2;
    for(inter2 = cardsPlayed.begin(); inter2 != cardsPlayed.end(); inter2++){
        int value = inter2->second.getValue();
        if(value > highestCard){
            highestCard = value;
        }
    }
    for(inter2 = cardsPlayed.begin(); inter2 != cardsPlayed.end(); inter2++){ // person that has highest card wins
        if(inter2->second.getValue() == highestCard){
            for(auto & playerWinner : Winners){
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
    int oneWarWinner = 0; // initailze to 0 default
    if(warWinners.size() == 1){ //checking to see how many winners there are if one that person wins
        warWinners[oneWarWinner]->battleWon(); // since 1 person left he wins
        for(int i = 0; i < warPileSize; i++) {
            warWinners[oneWarWinner]->addToBottom(warPile.deal());
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
    vector<Player*> ListOfPlayers;
    LostAndFound LostAndFound;

    cout << "How many decks to use : ";
    cin >> deckSize;
    cout << "How many players are there: ";
    cin >> playerSize;
    for(int i = 0; i < playerSize; i++){
        auto* player = new Player(i);
        ListOfPlayers.push_back(player);
    }
    MegaDeck myDeck(deckSize);
    myDeck.shuffle();

    int deckSplit = myDeck.megaDeckSize() / playerSize;
    int rem = myDeck.megaDeckSize() % playerSize; // remainder of cards
    for(int i = 0; i < playerSize; i++){
        for(int j = 0; j < deckSplit; j++){
            ListOfPlayers[i]->add(myDeck.deal());
        }
    }
    while(rem > 0){
        ListOfPlayers[0]->add(myDeck.deal());
        rem--;
    }

    int battlesPlayed = 1; // start at 1 since when you played a battle
    while (CardsLeft(ListOfPlayers) > 1){

        map<int, Card> CardsPlayed; //to keep the players card value and which player played that cards

        vector<Player*> Winners; // vector of winners

        int highestCard = 0;

        for(auto & i : ListOfPlayers){ //checking if player has cards left
            if(i->playerLeftToPlay() == 1){
                i->battlePlayed();
                CardsPlayed[i->getPlayerPosition()] = i->playerDeal(); // incremet number of battles if they had cards and dealed
            }
        }
        map<int, Card>::iterator iter; //mapping
        for(iter = CardsPlayed.begin(); iter != CardsPlayed.end(); iter++){
            int value = iter->second.getValue();
            if(value > highestCard){ //looking for highest card value
                highestCard = value;
            }
        }
        for(iter = CardsPlayed.begin(); iter != CardsPlayed.end(); iter++){
            if(iter->second.getValue() == highestCard){ //find highest card value
                Winners.push_back(ListOfPlayers[iter->first]); //storing key value in vector
            }
        }
        int oneWarWinner = 0;
        if(Winners.size() == 1){
            Winners[oneWarWinner]->battleWon(); // add win to the Winner
            for(iter = CardsPlayed.begin(); iter != CardsPlayed.end(); iter++){
                Winners[oneWarWinner]->addToBottom(iter->second);
            }
        }else{ // war
            for(iter = CardsPlayed.begin(); iter != CardsPlayed.end(); iter++){
                LostAndFound.addCard(iter->second);
            }
            megaWar(Winners, LostAndFound);
        }
        cout << "Battle " << battlesPlayed++ << " stats: " << endl;
        for(auto & i : ListOfPlayers){
            i->displayStats();
        }
    }
}