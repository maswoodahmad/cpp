#include <iostream>
#include "Customer.h"
#include "Type.h"
#include "Functionalities.h"



int main(){

Customer* container[5];

Customer* arr[5];
CustomerCreator(container);

std::cout<<"\nCustomer with credit range 100-200\n\n";

CreditInRange100_200(container,arr);

for(int i=0; i<5 ;i++)
{
std::cout<<*arr[i]<<std::endl;
}

std::cout<<"\nCustomer with Type premium \n\n";

TypeOfCustomer(container, Type::PREMIUM,arr);

for(int i=0; i<5 ;i++)
{
std::cout<<*arr[i]<<std::endl;
}
std::cout<<"\nAverage credit of premium type customers:\t";

std::cout<<AverageOfCertainType(container, Type::PREMIUM)<<std::endl<<std::endl;

FreeMemory(container);







}