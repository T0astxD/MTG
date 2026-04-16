#include "Log/Log.h"

class Planeswalker {
    public:
        Planeswalker(int size){ //size should maybe be something else
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = 0;
            }
            logString("Data initialized");
        }

        ~Planeswalker() {
            delete[] data;
            logString("Data deleted");
        }

    private:
        int loyalty;
        bool instantSpeed = false;
        bool permanent = true;
        int* data;
};