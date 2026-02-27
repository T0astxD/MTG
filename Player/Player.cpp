#include <stack>
#include <vector>
#include "CardType/Land/Land.h"
#include "Card/Card.h"
#include "Player.h"
#include "Log/log.h"

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

int Player::amongUs() {
    return 5;
}

// void playsLand(Land land) {
//     handSize--;
//     emptyHandCheck();
//     landsInPlay.push_back(land);
// }



//add shuffle. maybe in deck class
