#include <iostream>
#include "Banana.h"
#include "Monkey.h"

using namespace std;


int main() {

    Banana* ripeBanana = new Banana("Yellow", 75);
    cout << "Ripe Banana color: " << ripeBanana->getColor()
         << ", weight: " << ripeBanana->getWeight()
         << ", calories " << ripeBanana->getCalories()
         << endl;


    Banana* youngBanana = new Banana("Green", 44);
    cout << "Young Banana color: " << youngBanana->getColor()
         << ", weight: " << youngBanana->getWeight()
         << ", calories " << youngBanana->getCalories()
         << endl;

    Monkey* george = new Monkey("Curious George");

    cout << george->getName()
         << " energy level: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;

    george->swingFromTrees();
    george->swingFromTrees();
    george->swingFromTrees();

    cout << george->getName()
         << " energy level after tree swinging: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;

    george->giveBanana(youngBanana);


    cout << george->getName()
         << " energy level after a green banana: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;


    george->giveBanana(ripeBanana);


    cout << george->getName()
         << " energy level after a yellow banana: " << george->getEnergy()
         << ", he is " << (george->isHungry() ? "hungry" : "not hungry")
         << endl;

    delete ripeBanana;
    delete youngBanana;
    delete george;

    return 0;


}
