#include <catch2/catch_test_macros.hpp>
#include "add.h"

TEST_CASE("add", "[add]") {
    REQUIRE(add(1, 2) == 3);
}