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

        Card getGraveyardTop(int n) { //n'th element in graveyard

            //if n > grave.size then not good
            std::stack<Card> tempGrave = graveyard;
            
            for (int i = 0; i < n && !tempGrave.empty(); i++) {
                tempGrave.pop();
            }
            return tempGrave.top();
        }

        int getGraveyardSize() {
            if (graveyard.size() == 0) {
                return 0;
            }


    return graveyard.size();
}



        Player(int size);

        ~Player();


        int emptyHandCheck();

        int amongUs();

        // void playsLand(Land land);

    private:
        int life = 20;
        int landPlaysLeft;
        //std::vector<Land> landsInPlay;
        int landsInPlayCount;
        bool hasProtection;
        int handSize = 7;
        int graveyardSize = 0;
        std::stack<Card> graveyard;
        int* data;


};