#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Employee.h"
#include "Project.h"

//functioj to create 3 objects in an in arry of project 
//also create 3 objects of employee in seperate array
//link one project with one emp


void CreateObjects(Employee* e[3]);

/*

a function to return the pointetr to the employee with the highest salary
*/

Employee* HighestPaidEmployee(Employee* e[3]);


/*
a function to return the count of all emp in the array whose _Dept value matches
with the second parameter passed to this function

*/
int CountOfCertainType(Employee* e[3], Department department);

float AverageBudget(Employee* arr[3]);

std::string DisplayEnum(const Department type );


void FreeMemory( Employee* e[3]);

//a function to check if all postions of the array are nullptr

bool CheckNull(Employee* arr[3]){
bool flag = true;
for(int i = 0; i < 3; i++)
{
    if(arr[i]!=nullptr) return false;
}
return flag;

}

#endif // FUNCTIONALITIES_H
