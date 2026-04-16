#pragma once

#include <stack>
#include <vector>
#include "CardType/Land/Land.h"
#include "Card/Card.h"



class Player {
    public:

        int getHandSize() {
            return handSize;
        }
        void setHandSize(int value) {
            handSize = value;
        }
        int getLife() {
            return life;
        }
        void setLife(int value) {
            life = value;
        }
        // stack<Card> getGraveyard() { //n'th element in graveyard
        //     return graveyard;
        // }

        Card getGraveyardTop(int n);

        int getGraveyardSize();



        Player(int size);

        ~Player();


        int emptyHandCheck();

        std::vector<std::string> importDeck(std::string deckName);

        void turnManagement();

        // void playsLand(Land land);

    private:
        int life = 20;
        int landPlaysLeft;
        //std::vector<Land> landsInPlay;
        bool yourTurn;
        int landsInPlayCount;
        bool hasProtection;
        int handSize = 7;
        int graveyardSize = 0;
        std::vector<Card> graveyard;
        std::vector<Card> library;
        int* data;


};