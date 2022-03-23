#include <string>
#include "Banana.h"

Banana::Banana(string color, int weight) {
    this->weight = weight;
    this->color = color;
}

int Banana::getWeight() const {
    return weight;
}

string Banana::getColor() const {
    return color;
}

float Banana::getCalories() const{
    float calories = weight * 1.2;
    return calories;
}

