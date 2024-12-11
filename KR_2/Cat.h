#pragma once

#include "Animal.h"

class Cat : public Animal {
private:
    int number_claws;
public:
    Cat(std::string name, std::string view, std::string color, int weight, int age, int number_claws);
    void display();
    Cat() = default;
    int getNumber_Claws();
};
