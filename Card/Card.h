#include <vector>


class Card {
    public:
        int manaValue;
        bool permanent;

        std::string name;
        std::vector<int> manaCost;
        std::vector<std::string> subType;
        std::vector<std::string> superType;
        std::vector<std::string> oracleText;

        Card();

        ~Card();


    private:



};