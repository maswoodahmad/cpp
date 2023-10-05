#include<iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
int main(){

Employee* e[3];


CreateObjects(e);

std::cout<<*HighestPaidEmployee(e);

FreeMemory(e);

}