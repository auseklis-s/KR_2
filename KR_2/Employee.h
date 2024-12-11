#pragma once

#include "Shelter.h"

class Employee : public Shelter {
private:
    std::string name;
    std::string job_title;
public:
    Employee(std::string name, std::string job_title); 
    virtual void displayInfo() = 0;   
    virtual ~Employee() {}

    std::string getName();
    void setName(std::string& name);

    std::string getJob_Title();
    void setJob_Title(std::string& name);

};
