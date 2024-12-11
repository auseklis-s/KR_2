#include "Employee.h"
#include <iostream>


Employee::Employee(std::string name, std::string job_title)
	: name(name), job_title(job_title) { }

std::string Employee::getName() {
	return name;
}

std::string Employee::getJob_Title() {
	return job_title;
}

void Employee::setName(std::string& name) {
	this->name = name;
}

void Employee::setJob_Title(std::string& job_title) {
	this->job_title = job_title;
}
