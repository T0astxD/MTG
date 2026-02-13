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
        int* data;


        Player(int size){ //size should maybe be something else
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = 0;
            }
            logString("Data initialized");
        }

        ~Player() {
            delete[] data;
            logString("Data deleted");
        }

        void emptyHandCheck() {
            if (handSize < 0) {
                handSize = 0;
            }
        }

        void playsLand(Land land) {
            handSize--;
            emptyHandCheck();
            landsInPlay.push_back(land);
        }



        //add shuffle. maybe in deck class




    private:


};