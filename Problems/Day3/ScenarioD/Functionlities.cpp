#include "Functionlities.h"
#include "Car.h"
#include "VehicleType.h"
#include "CarType.h"
#include "Bike.h"
#include "BikeType.h"
#include "Vehicle.h"
#include <iostream>

// this is definition
void ObjectCreator(Vehicle *container[5])
{
    container[0] = new Car(101, "Maruti", VehicleType::CAR, 890171.0f, CarType::SUV);
    container[1] = new Car(102, "Honda", VehicleType::CAR, 790171.0f, CarType::SEDAN);
    container[2] = new Car(103, "Toyota", VehicleType::CAR, 1790171.0f, CarType::HATCHBACK);
    container[3] = new Bike(104, "Hero", VehicleType::BIKE, 95700.0f, 45.0f, BikeType::COMMUTE);
    container[4] = new Bike(105, "TVS", VehicleType::BIKE, 66570.0f, 50.0f, BikeType::SPORTS);
    for (int i = 0; i < 5; i++)
    {

        std::cout << *(container[i]) << std::endl;
    }
}

float AveragePrice(Vehicle *container[5])
{
    float total = 0.0f;
    for (int i = 0; i < 5; i++)
    {

        total += (container[i])->price();
        total /= 5;
    }

    return total;
}

void CallCalculateTax(Vehicle *container[5])
{
    for (int i = 0; i < 5; i++)
    {
        VehicleType v = (container[i])->type();
        std::cout << "tax for vehicle  with id"
                  << (container[i])->id()
                  << "->" << (container[i])->CalculateTax()
                  << std::endl;
    }
}

void FreeMemory(Vehicle *container[5])
{
    for (int i = 0; i < 5; i++)
    {
        delete container[i];
    }
}

void CarWithMinimumPrice(Vehicle *container[5])
{
    Vehicle *ans;
    for (int i = 0; i < 5; i++)
    {
        if (container[i]->type() == VehicleType::CAR)
        {
            float min = 10000000;
            float price = (container[i])->price();
            if (price < min)
            {
                ans = container[i];
                min = price;
            }
        }
    }
    std::cout << *ans << std::endl;
}
