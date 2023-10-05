#include<iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
int main(){

Employee* e[3];


CreateObjects(e);

std::cout<<*HighestPaidEmployee(e);
std::cout<<"\nNumbers of Employee of type"<<DisplayEnum(Department::DEVELOPMENT)<<"are->"<<CountOfCertainType(e,Department::DEVELOPMENT);

FreeMemory(e);

}