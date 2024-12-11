#pragma once

#include "Animal.h"

class Bird : public Animal {
private:
    int number_feathers;
public:
    Bird(std::string name, std::string view, std::string color, int weight, int age, int number_feathers);
    void display();
};
