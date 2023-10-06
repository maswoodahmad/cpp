#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "CarType.h"

class Car
{
private:
    std::string _carChassisNumber;
    std::string _brand;
    std::string _carModel;
    CarType _type;
    float _carPrice;
    int _carSeatCount;
    int _carFuelCapacity;

public:
    // Constructors
    Car(
        std::string carChassisNumber,
        std::string brand,
        std::string carModel,
        CarType type,
        float carPrice,
        int carSeatCount,
        int carFuelCapacity);

    Car(
        std::string carChassisNumber,
        std::string brand,
        std::string carModel,
        float carPrice);

    // Destructor
    ~Car()
    {
        std::cout << "Car instance with chassis number " << _carChassisNumber << " destroyed\n";
    }

    int operator+ ( const Car c2)
    {
       return this->carSeatCount() + c2.carSeatCount();
    }

    // Getter methods
    std::string carChassisNumber() const { return _carChassisNumber; }
    std::string brand() const { return _brand; }
    std::string carModel() const { return _carModel; }
    CarType type() const { return _type; }
    float carPrice() const { return _carPrice; }
    int carSeatCount() const { return _carSeatCount; }
    int carFuelCapacity() const { return _carFuelCapacity; }

    // Setter methods
    void setCarChassisNumber(const std::string &carChassisNumber) { _carChassisNumber = carChassisNumber; }
    void setBrand(const std::string &brand) { _brand = brand; }
    void setCarModel(const std::string &carModel) { _carModel = carModel; }
    void setType(const CarType &type) { _type = type; }
    void setCarPrice(float carPrice) { _carPrice = carPrice; }
    void setCarSeatCount(int carSeatCount) { _carSeatCount = carSeatCount; }
    void setCarFuelCapacity(int carFuelCapacity) { _carFuelCapacity = carFuelCapacity; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

std::string DisplayEnum(const CarType value){

if(value==CarType::SEDAN)
    {
           return "SEDAN";

 }
else if(value==CarType::SUV){
           return "SUV";
}
else{
           return "SPORTS_HATCHBACK";

}
return "none";

#endif // CAR_H
