#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Department.h"
#include "Project.h"

class Employee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    Department _departmentType;
    Project *project;

public:
    Employee(
        std::string _id,
        std::string _name,
        float _salary,
        Department _departmentType,
        Project *project);

    ~Employee()
    {
        delete project;
        std::cout << "object destroyed\n";
    }

    float salary() const { return _salary; }

    Department getDepartmentType() const { return _departmentType; }

    Project *getProject() const { return project; }
   
    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

    
};


#endif // EMPLOYEE_H
