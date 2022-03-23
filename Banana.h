//
// Created by Paul Raupach on 10/3/21.
//
#include <string>

using namespace std;

#ifndef BANANA_H
#define BANANA_H



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


#endif //BANANA_H
