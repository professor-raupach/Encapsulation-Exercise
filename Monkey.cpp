#include "Monkey.h"

Monkey::Monkey(string name) {
    this->name = name;
    energy = 500;
}

void Monkey::setName(string name) {
    this->name = name;
}

string Monkey::getName() {
    return name;
}

int Monkey::getEnergy() {
    return energy;
}

void Monkey::giveBanana(Banana* banana) {
    if (banana->getColor() == "Yellow") {
        energy += banana->getCalories();
    }
}

void Monkey::swingFromTrees() {
    energy -= ENERGY_TO_SWING;
}

bool Monkey::isHungry() {
    return (energy < HUNGER_THRESHOLD);
}
