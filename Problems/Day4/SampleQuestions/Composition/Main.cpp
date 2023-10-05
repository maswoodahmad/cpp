#include<iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
#define SIZE 3
int main(){

Employee* e[SIZE]={};

try{
    
    CreateObjects(e);
    std::cout<<"Highest Paid Employee is\t"<<*HighestPaidEmployee(e)<<std::endl;
    std::cout<<"\nNumbers of Employee of type\t"<<DisplayEnum(Department::DEVELOPMENT)<<"\tare\t"<<CountOfCertainType(e,Department::DEVELOPMENT)<<std::endl;
    std::cout<<"Average budget\t"<<AverageBudget(e)<<std::endl;

}catch(std::runtime_error& ex){
    std::cout<<ex.what();
}

FreeMemory(e);


}