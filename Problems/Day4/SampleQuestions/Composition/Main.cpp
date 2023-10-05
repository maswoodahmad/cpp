#include<iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
int main(){

Employee* e[3];


CreateObjects(e);

std::cout<<*HighestPaidEmployee(e);
std::cout<<"\nNumbers of Employee of type\t"<<DisplayEnum(Department::DEVELOPMENT)<<"\tare->\t"<<CountOfCertainType(e,Department::DEVELOPMENT)<<std::endl;

FreeMemory(e);

}