#include "Phase/phase.h"

// Phase phase = Phase::upkeep;

Phase Turn::nextPhase(Phase current) {
    for (int i = 0; i < Phase::phaseOrder.size(); i++) {
        if (phaseOrder[i] == current) {
            return phaseOrder[(i + 1) % phaseOrder.size()]
        }
    }
    return Phase::untap;
}

Turn::turnManagement() {
    std::getline(std::cin, std::string input);

    Phase phase = Phase::phaseOrder;

    if (input.empty()) {
        nextPhase(phase);
    }


    // switch (Phase::phase) {
    //     case Phase::untap:
    //         std::cout<<"phase";
    //         if(input.empty()) {
    //             phase = Phase::upkeep;
    //         }
    //         break;
    //     case Phase::upkeep:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::draw:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::main1:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::enterCombat:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::declareAttack:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::declareBlock:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::firstStrikeDamage:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::damage:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::endOfCombat:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::main2:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::endTurn:
    //         std::cout<<"can you see this??";
    //         break;
    //     case Phase::cleanUp:
    //         std::cout<<"can you see this??";
    //         break;
    //     case default:
    //     break;
    // }   
}

