#pragma once

#include <vector>
#include <string>


class Card {
    public:

        Card() = default;

        ~Card() = default;


    private:
        int manaValue;
        bool permanent;

        std::string name;
        std::vector<int> manaCost;
        std::vector<std::string> subType;
        std::vector<std::string> superType;
        std::vector<std::string> oracleText;



};