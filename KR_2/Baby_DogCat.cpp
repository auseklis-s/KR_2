#include "Baby_DogCat.h"
#include <iostream>

Baby_DogCat::Baby_DogCat(std::string name, std::string view, std::string color, int weight, int age, int number_spots, int number_claws)
    : Dog(name, view, color, weight, age, number_spots), Cat(name, view, color, weight, age, number_claws) {}


void Baby_DogCat::display(){
    Animal::display(); 
    std::cout << getName() << " имеет столько пятен: " << getNumber_Sports() << std::endl;
    std::cout << getName() << " имеет столько когтей: " << getNumber_Claws() << std::endl;
    std::cout <<getName()<< " Он просто чиловый парень"<<std::endl;
    std::cout << "---------------------------------------------------------------------------" << std::endl;
}

std::string Baby_DogCat::getName(){
    return Animal::getName(); 
}


