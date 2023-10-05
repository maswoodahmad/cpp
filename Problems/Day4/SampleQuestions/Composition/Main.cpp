#include<iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
int main(){

Employee* e[3];
Project* p[3];

CreateObjects(e,p);

std::cout<<*HighestPaidEmployee(e);



}