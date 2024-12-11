#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name, std::string view, std::string color, int weight, int age, int number_claws)
    : Animal(name, view, color, weight, age), number_claws(number_claws){}


void Cat::display() {
    setlocale(LC_ALL, "RUS");
    Animal::display();
    std::cout << getName() << " ����� ������� ������: " << number_claws << std::endl;
    std::cout << getName() << " �������� ������" << std::endl;
    std::cout << "---------------------------------------------------------------------------" << std::endl;
}

int Cat::getNumber_Claws() {
    return number_claws;
}