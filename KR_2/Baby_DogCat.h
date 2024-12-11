#pragma once

#include "Dog.h"
#include "Cat.h"

class Baby_DogCat : public Dog, public Cat {
public:
    Baby_DogCat(std::string name, std::string view, std::string color, int weight, int age, int number_spots, int number_claws);
    void display();
    std::string getName();
};
