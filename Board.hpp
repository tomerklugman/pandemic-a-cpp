#pragma once
#include <iostream>
#include <string>
#include <map>
#include "Color.hpp"
#include "City.hpp"

using namespace std;

namespace pandemic
{

    class Board
    {
    public:
        map<City, int> board;

        int &operator[](City city);
        friend ostream &operator<<(ostream &out, const Board &board);
        bool is_clean();
        void remove_cures();
    };

}
