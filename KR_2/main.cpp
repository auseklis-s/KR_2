#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Baby_DogCat.h"
#include "Manager.h"
#include "Veterinarian.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "RUS");
    Dog* dog = new Dog("Бобик", "Чикинез", "Баклажан", 34, 34, 2);
    Cat* cat = new Cat("Сима", "Абхазская", "Турецкий огурец", 53, 70, 32);
    Bird* bird = new Bird("Ара", "Синица", "Синий", 23, 3, 0);
    Baby_DogCat* baby = new Baby_DogCat("Котопес", "Котопес", "Пестрый", 45, 34, 5, 8);
    Manager* manager = new Manager("Альфред", "Дворецкий Бетмена");
    Veterinarian* vet = new Veterinarian("Джозаф", "Стажер");

    dog->display();
    cat->display();
    bird->display();
    baby->display();
    manager->displayInfo();
    vet->displayInfo();

    delete dog;
    delete cat;
    delete bird;
    delete baby;
    delete manager;
    delete vet;

    return 0;
}
