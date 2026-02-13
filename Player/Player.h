#pragma once

#include <stack>
#include <vector>
#include "CardType/Land/Land.h"
#include "Card/Card.h"


class Player {
    public:
        int life = 20;
        int landPlaysLeft;
        std::vector<Land> landsInPlay;
        int landsInPlayCount;
        bool hasProtection;
        int handSize;
        int graveyardSize;
        std::stack<Card> graveyard;


        Player(int size);

        ~Player();

        void emptyHandCheck();

        void playsLand(Land land);

    private:


};