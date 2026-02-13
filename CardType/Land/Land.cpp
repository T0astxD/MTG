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

        Land(int size){ //size should maybe be something else
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = 0;
            }
            logString("Data initialized");
        }

        ~Land() {
            delete[] data;
            logString("Data deleted");
        }
        
    private:





};