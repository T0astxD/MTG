#pragma once

#include "Log/Log.h"
#include "Card/Card.h"
#include "Player/Player.h"

class Sorcery: public Card {
    public:

        Sorcery(int size);

        ~Sorcery();
        void lightningBolt(Player& player);

    private:
        bool instantSpeed = false;
        bool permanent = false;
        bool spell = true;
        int* data;



};