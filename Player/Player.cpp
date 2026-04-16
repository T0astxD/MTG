#include <stack>
#include <vector>
#include "CardType/Land/Land.h"
#include "Card/Card.h"
#include "Player.h"
#include "Log/log.h"
#include <bits/stdc++.h>
#include "Enums/enums.h"

Player::Player(int size){
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = 0;
    }
    logString("Player initialized\n");
}

Player::~Player() {
    delete[] data;
    logString("Player deleted\n");
}

int Player::emptyHandCheck() {
    if (Player::getHandSize() < 0) {
        setHandSize(0);
    }
    return handSize;
}

Card Player::getGraveyardTop(int n) { //n'th element in graveyard
    return graveyard[n];
}

int Player::getGraveyardSize() {
    if (graveyard.size() == 0) {
        return 0;
    }

    return graveyard.size();
}

//returns a two dimentional array with a cards properties
//on the x axis, and each card on the y-axis
std::vector<std::string> Player::importDeck(std::string deckName) {
    std::ifstream myFile(deckName);
    std::string line;
    std::vector<std::string> deck;
    int lineCounter = 0;
    char delimiter = ' ';

    if (!myFile.is_open()) {
        logString("File could not open!");
        //return 1;
    }

    while (getline(myFile, line)) {
        deck.push_back(line);
        lineCounter++;
    }

    // for (int i = 0; i < lineCounter; i++) {
    //     getline(myFile, line, delimiter) = deck[i];

    // }

    myFile.close();

    return deck;
}







//need file import for this to work.
// void Player::createDeck(std::vector<Card> libraryCards, ) {

// }

// void playsLand(Land land) {
//     handSize--;
//     emptyHandCheck();
//     landsInPlay.push_back(land);
// }



//add shuffle. maybe in deck class
