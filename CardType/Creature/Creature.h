#include "Log/Log.h"
#include "Player/Player.h"

class Creature: public Card {
    public:
        Creature(int size);

        ~Creature();

        void resolveCombatDamage(Creature &creature, Player &player);

    private:
        int power = 0;
        int toughness = 0;
        bool hasFirstStrike;
        bool hasDoubleStrike;
        bool isBlocked;
        bool instantSpeed = false;
        bool permanent = true;
        int* data;
        






};