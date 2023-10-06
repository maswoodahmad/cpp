#include <iostream>
#include "Car.h"
#include <iostream>
#include "Functionlities.h"

int main(){

Vehicle* container[3];// reserving 24 bytes of memoery  null pointer in the start

ObjectCreator(container);

std::cout<<"object created"<<std::endl<<"average price of a car\t"<<AveragePrice(container)<<std::endl;
CallCalculateTax(container);
CarWithMinimumPrice(container);
FreeMemory(container);


Vehicle v1(101, "toyot", VehicleType::CAR, 1000.0f);
Vehicle v2(102, "toyot", VehicleType::CAR, 100067.0f);
Vehicle* v3= new Vehicle(103, "toyot", VehicleType::CAR, 100.0f);
Vehicle* v4= new Vehicle(104, "toyot", VehicleType::CAR, 50.0f);
std::cout<<"operator overloading stack\t"<<v1+v2<<std::endl;
std::cout<<"operator overloading\t"<<*v3 + *v4<<std::endl;

delete v3;
delete v4;

}