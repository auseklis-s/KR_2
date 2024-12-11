#include "Bird.h"
#include <iostream>

Bird::Bird(std::string name, std::string view, std::string color, int weight, int age, int number_feathers)
    : Animal(name, view, color, weight, age), number_feathers(number_feathers) {
}


void Bird::display() {
    setlocale(LC_ALL, "RUS");
    Animal::display();
    std::cout << getName() << " имеет столько перьев: " << number_feathers << std::endl;
    std::cout << getName() << " царапает мебель" << std::endl;
    std::cout << "---------------------------------------------------------------------------" << std::endl;
}
