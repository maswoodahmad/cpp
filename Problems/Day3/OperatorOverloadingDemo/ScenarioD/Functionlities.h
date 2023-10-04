#ifndef FUNCTIONLITIES_H
#define FUNCTIONLITIES_H

#include "Vehicle.h"


//create objects on heap here is defined
void ObjectCreator(Vehicle* container[3]);


float AveragePrice(Vehicle* container[3]);

//demo of calculate tax;
void CallCalculateTax(Vehicle* container[3]);

//delete all acquired memory
void FreeMemory(Vehicle* container[3]);

void CarWithMinimumPrice(Vehicle* container[3]);



#endif // FUNCTIONLITIES_H
