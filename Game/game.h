#pragma once



class Game {
    public:


    Game(int size);

    ~Game();

    void clearConsole();

    void gameLoop();



    private:
        bool isRunning;
        int* data;








};