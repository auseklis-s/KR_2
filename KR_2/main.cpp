#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Baby_DogCat.h"
#include "Manager.h"
#include "Veterinarian.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "RUS");
    Dog* dog = new Dog("�����", "�������", "��������", 34, 34, 2);
    Cat* cat = new Cat("����", "���������", "�������� ������", 53, 70, 32);
    Bird* bird = new Bird("���", "������", "�����", 23, 3, 0);
    Baby_DogCat* baby = new Baby_DogCat("�������", "�������", "�������", 45, 34, 5, 8);
    Manager* manager = new Manager("�������", "��������� �������");
    Veterinarian* vet = new Veterinarian("������", "������");

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
