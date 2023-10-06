#include <iostream>
#include "Car.h"
#include  "Functionalities.h"
#include "CarType.h"

int main()
{

    Car *container[5];

    CreateObjects(container);

    for (int i = 0; i < 5; i++){
        std::cout << *container[i];
    }

        std::cout << "average fuel capacity" << AverageFuelCapacity(container) << std::endl;

    std::cout << "Number  of given type car \t" << CountOfGivenBrand(container, CarType::SEDAN) << std::endl;
    FindBestPassengerCar(container, CarType::SPORTS_HATCHBACK);
    std::cout <<"operator overloading"<< *container[1] + *container[2] << std::endl;
    FreeMemory(container);
}
