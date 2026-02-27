#include <stdio.h>
#include <stack>
#include <vector>
#include <iostream>


#include "Log/log.h"
#include "Card/Card.h"
#include "Player/Player.h"
#include "CardType/Sorcery/Sorcery.h"
#include "Game/game.h"




//int exileSize;
//int exile[exileSize]; //should also be a stack

int main() {

    Game myGame(100000); //idk how big it needs to be.

    myGame.gameLoop();

    return 0;
}
