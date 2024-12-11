#include "Veterinarian.h"
#include <iostream>

Veterinarian::Veterinarian(std::string name, std::string job_title)
    : Employee(name, job_title) {
}


void Veterinarian::displayInfo() {
    std::cout << "���: " << getName() << ", ���������: " << getJob_Title() << std::endl;
}
