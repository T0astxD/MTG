#include <vector>
#include "Card.h"


Card::Card() {




}

Card::~Card();

// void resolves(Card& card) {
//     //if not countered. TODO: add counterspells
//     if (!permanent) {
//         graveyard.push(this);
//         graveyardSize++;
//     }
// }
void isPermanent(Card& card) {
    if (!permanent) {
        graveyard.push(this);
        graveyardSize++;
    }
}