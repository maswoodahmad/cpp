#include "Functionalities.h"
#include "CarType.h"'


void CreateObjects(Car *container[5])
{

    container[0] = new Car("123456", "Toyota", "Camry", CarType::SEDAN, 25000.0, 5, 15);
    container[1] = new Car("789012", "Honda", "Civic", CarType::SEDAN, 22000.0, 5, 14);
    container[2] = new Car("345678", "Ford", "Mustang", CarType::SEDAN, 45000.0, 2, 16);
    container[3] = new Car("901234", "Jeep", "Wrangler", CarType::SUV, 35000.0, 5, 18);
    container[4] = new Car("567890", "Chevrolet", "Silverado", CarType::SEDAN, 40000.0, 3, 20);
    container[5] = new Car("567890", "Chevrolet", "Silverado", CarType::SEDAN, 40000.0, 3, 20);
}
float AverageFuelCapacity(Car *container[5])
{
    float avg = 0.0f;
    for (int i = 0; i < 5; i++)
    {
        avg += (container[i])->carFuelCapacity();
    }
    return avg / 5;
}

int CountOfGivenBrand(Car *container[5], CarType type)
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {

        if (container[i]->type() == type)
        {
            count++;
        }
    }
    return count;
}

void FindBestPassengerCar(Car *container[5], CarType type)
{
    int maxSeats = 0;
    int index = 0;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if (container[i]->type() != type)
        {
            continue;
        }
        else
        {
            flag = true;
            if (container[i]->carSeatCount() > maxSeats)
            {
                maxSeats = container[i]->carSeatCount();
                index = i;
            }
        }
    }

    if (flag)
    {
        std::cout<<(container[index])->brand()<<"\t"
        <<container[index]->carModel()<<"\t"
        <<container[index]->carSeatCount()<<"\n";
    }
    else
    {
        std::cout << "No such car of provided type found\n";
    }
}

void FreeMemory(Car * container[5]){
    for (int i = 0; i < 5; i++){

        delete container[i];
    }
}