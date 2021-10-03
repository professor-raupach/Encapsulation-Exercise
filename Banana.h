//
// Created by Paul Raupach on 10/3/21.
//
#include <string>

using namespace std;

#ifndef ENCAPSULATION_DEMO_BANANA_H
#define ENCAPSULATION_DEMO_BANANA_H



class Banana {
private:
    string color;
    int weight;
public:
    Banana(string color, int weight);
    int getWeight() const;
    float getCalories() const;
    string getColor() const;
};


#endif //ENCAPSULATION_DEMO_BANANA_H
