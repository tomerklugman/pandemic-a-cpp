#pragma once
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include <string>

namespace pandemic
{
        class Player
        {
        public:
                Board &board;
                City city;

                Player(Board &board, City city);
                Player &drive(City city);
                Player &fly_direct(City city);
                Player &fly_charter(City city);
                Player &fly_shuttle(City city);
                Player &build();
                Player &discover_cure(Color color);
                Player &treat(City city);
                string role();
                Player &take_card(City city);
        };
}