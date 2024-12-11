#include "Manager.h"
#include <iostream>

Manager::Manager(std::string name, std::string job_title)
    : Employee(name, job_title) {
}


void Manager::displayInfo() {
    std::cout << "���: " << getName() << ", ���������: " << getJob_Title() << std::endl;
}
