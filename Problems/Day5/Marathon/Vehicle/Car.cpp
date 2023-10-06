#include "Car.h"

Car::Car(std::string _carChassisNumber, std::string _brand, std::string _carModel, CarType _type, float _carPrice, int _carSeatCount,int _carFuelCapacity)
: _carChassisNumber(_carChassisNumber), _brand(_brand), _carModel(_carModel), _type(_type), _carPrice(_carPrice), _carSeatCount(_carSeatCount),_carFuelCapacity(_carFuelCapacity)
{
}

Car::Car(std::string _carChassisNumber, std::string _brand, std::string _carModel, float _carPrice)
: _carChassisNumber(_carChassisNumber), _brand(_brand), _carModel(_carModel), _type(_type), _carPrice(_carPrice)
{
    
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_carChassisNumber: " << rhs._carChassisNumber
       << " _brand: " << rhs._brand
       << " _carModel: " << rhs._carModel
       << " _type: " <<DisplayEnum( rhs._type)
       << " _carPrice: " << rhs._carPrice
       << " _carSeatCount: " << rhs._carSeatCount
       << " _carFuelCapacity: " << rhs._carFuelCapacity;
    return os;
}

