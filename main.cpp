#include <iostream>
#include "Banana.h"
#include "Monkey.h"

using namespace std;


int main() {

    // Create a ripe banana
    Banana* ripeBanana = new Banana("Yellow", 75);
    cout << "Ripe Banana color: " << ripeBanana->getColor()
         << ", weight: " << ripeBanana->getWeight()
         << ", calories " << ripeBanana->getCalories()
         << endl;


    // Create a none ripe banana
    Banana* youngBanana = new Banana("Green", 44);
    cout << "Young Banana color: " << youngBanana->getColor()
         << ", weight: " << youngBanana->getWeight()
         << ", calories " << youngBanana->getCalories()
         << endl;

    // Create a monkey
    Monkey* george = new Monkey("Curious George");

    cout << george->getName()
         << " energy level: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;

    // use up some energy
    george->swingFromTrees();
    george->swingFromTrees();
    george->swingFromTrees();

    cout << george->getName()
         << " energy level after tree swinging: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;

    // give the monkey a none ripe banana
    george->giveBanana(youngBanana);


    cout << george->getName()
         << " energy level after a green banana: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;

    // give the monkey a ripe banana
    george->giveBanana(ripeBanana);


    cout << george->getName()
         << " energy level after a yellow banana: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;


    // always clean up our memory.
    delete ripeBanana;
    delete youngBanana;
    delete george;

    return 0;


}
