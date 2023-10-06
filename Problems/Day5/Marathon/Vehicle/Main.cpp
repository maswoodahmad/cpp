#include <iostream>
#include "Car.h"
#include  "Functionalities.h"
#include "CarType.h"

int main()
{

    Car *container[5];

    CreateObjects(container);



    std::cout << "average fuel capacity"<<AverageFuelCapacity(container) << std::endl;

    std::cout << "Number  of given type car \t" << CountOfGivenBrand(container, CarType::SEDAN) << std::endl;
    FindBestPassengerCar(container, CarType::SUV);

    FreeMemory(container);
}
