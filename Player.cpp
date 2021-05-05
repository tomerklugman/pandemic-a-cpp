#include <string>
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

using namespace std;
namespace pandemic
{

    Player::Player(Board &board, City city) : board(board), city(city)
    {
    }
    Player &Player::drive(City city)
    {
        return *this;
    }
    Player &Player::fly_direct(City city)
    {
        return *this;
    }
    Player &Player::fly_charter(City city)
    {
        return *this;
    }
    Player &Player::fly_shuttle(City city)
    {
        return *this;
    }
    Player &Player::build()
    {
        return *this;
    }
    Player &Player::discover_cure(Color color)
    {
        return *this;
    }
    Player &Player::treat(City city)
    {
        return *this;
    }
    string Player::role()
    {
        return "medic";
    }
    Player &Player::take_card(City city)
    {
        return *this;
    }

}