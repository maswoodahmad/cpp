#include "Employee.h"
#include "Functionalities.h"
Employee::Employee(std::string _id, std::string _name, float _salary, Department _departmentType, Project* project)
:_id(_id), _name(_name), _salary(_salary), _departmentType(_departmentType), project(project)

{
}



std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _departmentType: " <<DisplayEnum(rhs._departmentType)
       << " project: " << *rhs.project;
    return os;
}


