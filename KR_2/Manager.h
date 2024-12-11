#pragma once

#include "Employee.h"

class Manager : public Employee {
public:
    Manager(std::string name, std::string job_title);
    void displayInfo();
    ~Manager() {}
};
