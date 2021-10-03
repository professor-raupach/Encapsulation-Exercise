#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <fstream>        // std::fstream
#include "../Monkey.h"
#include "../Banana.h"

TEST_CASE("Should be able to create a Monkey") {
 Monkey* monkey = new Monkey("Cyde");
}

TEST_CASE("Should be able to get the Monkey's Name") {
    Monkey* monkey = new Monkey("Cyde");
    REQUIRE_THAT("Cyde", Catch::Equals(monkey->getName()));
}


TEST_CASE("Should be able to change the Monkey's Name") {
    Monkey* monkey = new Monkey("Cyde");
    monkey->setName("Rafiki");
    REQUIRE_THAT("Rafiki", Catch::Equals(monkey->getName()));
}

TEST_CASE("Should start with 500 Energy") {
    Monkey* monkey = new Monkey("Cyde");
    REQUIRE(500 == monkey->getEnergy());
}


TEST_CASE("Swinging in the trees should lower energy") {
    Monkey* monkey = new Monkey("Cyde");
    monkey->swingFromTrees();
    REQUIRE(500 > monkey->getEnergy());

}

TEST_CASE("Should not start out hungry") {
    Monkey* monkey = new Monkey("Cyde");
    REQUIRE_FALSE(monkey->isHungry());
}

TEST_CASE("Swinging from the trees 3 time should make the monkey hungry") {
    Monkey* monkey = new Monkey("Cyde");
    monkey->swingFromTrees();
    monkey->swingFromTrees();
    monkey->swingFromTrees();
    REQUIRE(monkey->isHungry());
}

TEST_CASE("Eating a yellow banana should raise energy") {
    Monkey* monkey = new Monkey("Cyde");
    Banana* banana = new Banana("Yellow", 50);
    monkey->giveBanana(banana);
    REQUIRE(500 < monkey->getEnergy());
}




