#include <iostream>
#include "Game/game.h"
#include "Log/Log.h"
#include "Card/Card.h"
#include "Player/Player.h"
#include "CardType/Sorcery/Sorcery.h"



Game::Game(int size){ //size should maybe be something else
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = 0;
    }
    logString("Game initialized\n");
}

Game::~Game() {
    delete[] data;
    logString("Game deleted\n");
}

void Game::clearConsole(){
    std::cout<<"\033[2J\033[1;1H";
}

void Game::gameLoop() {
    clearConsole();

    Player player1(10);
    Sorcery sorcery1(10);
    newLine(1);
    std::vector<std::string> player1Deck = player1.importDeck("deck.txt");
    std::cout<<player1Deck[0];
    newLine(1);
    newLine(3);
    logString("Player 1 hand size: ");
    logInt(player1.getHandSize());
    newLine(2);
    logInt(player1.getLife());
    sorcery1.lightningBolt(player1);
    newLine(1);
    logInt(player1.getLife());

    //std::cout<<player1.getGraveyardTop(1);
    //logInt(player1.getGraveyardSize());
    //std::cout<<player1.getGraveyardSize();
    newLine(3);
    
    //Player player2(10);
}