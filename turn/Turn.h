#pragma once

class Turn: public Player {

    // enum class Phase {
    //     untap,
    //     upkeep,
    //     draw,
    //     main1,
    //     enterCombat,
    //     declareAttack,
    //     declareBlock,
    //     firstStrikeDamage,
    //     damage,
    //     endOfCombat,
    //     main2,
    //     endTurn,
    //     cleanUp
    // };

    static const std::vector<Phase> phaseOrder = {
        Phase::untap,
        Phase::upkeep,
        Phase::draw,
        Phase::main1,
        Phase::enterCombat,
        Phase::declareAttack,
        Phase::declareBlock,
        Phase::firstStrikeDamage,
        Phase::damage,
        Phase::endOfCombat,
        Phase::main2,
        Phase::endTurn,
        Phase::cleanUp
    };



}

