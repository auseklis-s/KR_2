#include "Dog.h"
#include <iostream>

Dog::Dog(std::string name, std::string view, std::string color, int weight, int age, int number_spots)
    : Animal(name, view, color, weight, age), number_spots(number_spots){}

void Dog::display(){
    Animal::display();
    std::cout << getName() << " ����� ������� �����: " << number_spots << std::endl;
    std::cout << getName() << " ������ �� �������" << std::endl;
    std::cout << "---------------------------------------------------------------------------"<<std::endl;
}

int Dog::getNumber_Sports() {
    return number_spots;
}
