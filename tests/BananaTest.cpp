#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <fstream>        // std::fstream
#include "../Banana.h"

TEST_CASE("Should be able to create a Banana") {
    Banana* banana = new Banana("Yellow", 90);
}

TEST_CASE("Should be able to get banana's color") {
    Banana* banana = new Banana("Red", 90);
    REQUIRE( "Red" == banana->getColor() );
}

TEST_CASE("Should be able to get banana's weight") {
    Banana* banana = new Banana("Green", 123);
    REQUIRE( 123 == banana->getWeight() );
}


TEST_CASE("Should be able to get banana's Calories") {
    Banana* banana = new Banana("Green", 123);
    REQUIRE( 147.6 == Approx(banana->getCalories()).epsilon(0.1) );
}
