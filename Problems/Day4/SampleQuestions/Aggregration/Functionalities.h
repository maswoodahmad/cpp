#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Employee.h"
#include "Project.h"

//functioj to create 3 objects in an in arry of project 
//also create 3 objects of employee in seperate array
//link one project with one emp


void CreateObjects(Employee* e[3], Project* p[3]);

/*

a function to return the pointetr to the employee with the highest salary
*/

Employee* HighestPaidEmployee(Employee* e[3]);


/*
a function to return the count of all emp in the array whose _Dept value matches
with the second parameter passed to this function

*/
int CountOfCertainType(Employee* e[3], Department department);

float AverageBudget(Project* arr[3]);
void FreeMemory( Employee* e[3], Project * p[3]);

std::string DisplayEnum(const Department type);

#endif // FUNCTIONALITIES_H
