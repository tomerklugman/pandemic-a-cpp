#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;
using namespace std;

Board board;

TEST_CASE("check")
{
    CHECK(board.is_clean() == true);

    Medic medic = {board, City::London};

    CHECK_NOTHROW(medic.drive(City::Paris));
    CHECK_NOTHROW(medic.drive(City::Essen));
    CHECK_THROWS(medic.drive(City::NewYork));
    CHECK_NOTHROW(medic.drive(City::Essen));
    CHECK_NOTHROW(medic.drive(City::StPeterburg));
    CHECK_NOTHROW(medic.drive(City::Moscow));
    CHECK_NOTHROW(medic.treat(City::Moscow));
    CHECK_THROWS(medic.treat(City::Paris));

    Researcher researcher = {board, City::London};

    CHECK_NOTHROW(researcher.drive(City::Chicago));
    CHECK_NOTHROW(researcher.drive(City::Montreal));
    CHECK_THROWS(researcher.drive(City::StPeterburg));
    CHECK_NOTHROW(researcher.drive(City::Washington));
    CHECK_NOTHROW(researcher.drive(City::Miami));
    CHECK_NOTHROW(researcher.discover_cure(Color::Yellow));
    CHECK_THROWS(researcher.discover_cure(Color::Blue));
    CHECK_THROWS(researcher.discover_cure(Color::Black));
    CHECK_THROWS(researcher.discover_cure(Color::Red));
    CHECK_NOTHROW(researcher.fly_charter(City::Mumbai));
    CHECK_THROWS(researcher.discover_cure(Color::Yellow));
    CHECK_THROWS(researcher.discover_cure(Color::Blue));
    CHECK_NOTHROW(researcher.discover_cure(Color::Black));
    CHECK_THROWS(researcher.discover_cure(Color::Red));
}