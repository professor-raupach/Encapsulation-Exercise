#ifndef ENCAPSULATION_DEMO_MONKEY_H
#define ENCAPSULATION_DEMO_MONKEY_H

static const int ENERGY_TO_SWING = 100;
static const int HUNGER_THRESHOLD = 250;

#include <string>
#include "Banana.h"

using namespace std;

class Monkey {
private:
    string name;
    int energy;

public:
    Monkey(string name);
    void setName(string name);
    string getName();
    int getEnergy();
    void giveBanana(Banana* banana);
    void swingFromTrees();
    bool isHungry();
};


#endif //ENCAPSULATION_DEMO_MONKEY_H
