#pragma once

#include "Log/Log.h"
#include <vector>

class Land {
    public:

        bool isBasic;
        bool instantSpeed = false;
        bool permanent = true;
        int* data;
        std::string superType;
        std::string subType;
        std::vector<Land> landsInPlay;

        Land(int size);

        ~Land();


    private:





};