#include "Log/Log.h"
#include "Sorcery.h"
#include "Player/Player.h"

Sorcery::Sorcery(int size){ //size should maybe be something else
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = 0;
    }
    logString("Sorcery initialized\n");
}

Sorcery::~Sorcery() {
    delete[] data;
    logString("Sorcery deleted\n");
}


void Sorcery::lightningBolt(Player& player) {
    player.setLife(player.getLife()-3);
}