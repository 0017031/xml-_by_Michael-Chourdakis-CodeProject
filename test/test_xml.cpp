#include <catch.hpp>

//#include "xml3all.h"

#include <limits>

using namespace std;
// using namespace chrono;
// using namespace date;
using namespace Catch;

// using CTimestampTEST = CTimestamp;

constexpr auto my_numeric_limits_max = std::numeric_limits<long long>::max();
constexpr auto my_numeric_limits_min = std::numeric_limits<long long>::min();


TEST_CASE("1", "[xmlTEST]")
{
    SECTION("1.1 ") // For each SECTION the TEST_CASE is executed from the start
    {
        // REQUIRE(CTimestampTEST{my_numeric_limits_max}.Count() == my_numeric_limits_max);
        // REQUIRE(CTimestampTEST{0}.Count() == 0);
        // REQUIRE(CTimestampTEST{-my_numeric_limits_max - 1}.Count() == -my_numeric_limits_max - 1);
		REQUIRE(1 == 1);
    }

}

