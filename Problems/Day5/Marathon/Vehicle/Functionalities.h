#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"

#include <iostream>
#define Size 5
void CreateObjects(Car *container[5]);

float AverageFuelCapacity(Car *container[5]);

int CountOfGivenBrand(Car *container[5], CarType type);

void FindBestPassengerCar(Car *container[5], CarType type);

#endif // FUNCTIONALITIES_H
