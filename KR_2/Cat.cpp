#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name, std::string view, std::string color, int weight, int age, int number_claws)
    : Animal(name, view, color, weight, age), number_claws(number_claws){}


void Cat::display() {
    setlocale(LC_ALL, "RUS");
    Animal::display();
    std::cout << getName() << " имеет столько когтей: " << number_claws << std::endl;
    std::cout << getName() << " царапает мебель" << std::endl;
    std::cout << "---------------------------------------------------------------------------" << std::endl;
}

int Cat::getNumber_Claws() {
    return number_claws;
}