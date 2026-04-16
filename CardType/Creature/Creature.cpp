#include "Log/Log.h"
#include "Creature.h"
#include "Player/Player.h"

Creature::Creature(int size) { //size should maybe be something else
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = 0;
    }
    logString("Data initialized");
}

Creature::~Creature() {
    delete[] data;
    logString("Data deleted");
}

void Creature::resolveCombatDamage(Creature &creature, Player &player) {
    if (hasFirstStrike) {
        logString("do something here!");
    }

    if (hasDoubleStrike) {
        logString("do something here!");
    }

    if (isBlocked) {
        toughness -= creature.power;
        creature.toughness -= power;
        logInt(toughness);
        logInt(creature.toughness);
    } else {
        player.setLife(player.getLife()-power);
    }


}