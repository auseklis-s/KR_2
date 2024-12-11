#include "Animal.h"
#include <iostream>


Animal::Animal(std::string name, std::string view, std::string color, int weight, int age)
    : name(name), view(view), color(color), weight(weight), age(age) {
}

void Animal::display() {
    std::cout << "Имя: " << name << " Порода: " << view << " Цвет: " << color << " Вес: " << weight << " Возраст: " << age << std::endl;
}

std::string Animal::getName() {
    return name;
}

std::string Animal::getView() {
    return view;
}

std::string Animal::getColor() {
    return color;
}

int Animal::getWeight() {
    return weight;
}

int Animal::getAge() {
    return age;
}

void Animal::setName(std::string& name) {
    this->name = name;
}

void Animal::setView(std::string& view) {
    this->view = view;
}

void Animal::setColor(std::string& color) {
    this->color = color;
}

void Animal::setWeight(int weight) {
    this->weight = weight;
}

void Animal::setAge(int age) {
    this->age = age;
}

