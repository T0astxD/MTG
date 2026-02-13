#include "Log/Log.h"

class Sorcery {
    public:

        bool instantSpeed = false;
        bool permanent = false;
        int* data;

        Sorcery(int size){ //size should maybe be something else
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = 0;
            }
            logString("Data initialized");
        }

        ~Sorcery() {
            delete[] data;
            logString("Data deleted");
        }

    private:





};