#pragma once

#include "Employee.h"

class Veterinarian : public Employee {
public:
    Veterinarian(std::string name, std::string job_title);
    void displayInfo();
    ~Veterinarian() {}
};
