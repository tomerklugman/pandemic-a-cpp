#include "Player.hpp"

namespace pandemic
{

    class Scientist : public Player
    {
    public:
        int n;
        Scientist(Board &board, City city, int n) : Player(board, city), n(n){};
        Player &discover_cure(Color color);
    };
}