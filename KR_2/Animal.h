#pragma once

#include "Shelter.h"
#include <string>

class Animal : public Shelter {
private:
    std::string name;
    std::string view;
    std::string color;
    int weight;
    int age;

public:
    Animal(std::string name, std::string view, std::string color, int weight, int age);
    virtual void display();
    virtual ~Animal() {}

    std::string getName();
    void setName(std::string& name);

    std::string getView();
    void setView(std::string& view);

    std::string getColor();
    void setColor(std::string& color);

    int getWeight();
    void setWeight(int weight);

    int getAge();
    void setAge(int age);

};
