#pragma once

#include "Animal.h"

class Dog : public Animal {
private:
    int number_spots;
public:
    Dog(std::string name, std::string view, std::string color, int weight, int age, int number_spots);
    void display();
    int getNumber_Sports();
};
