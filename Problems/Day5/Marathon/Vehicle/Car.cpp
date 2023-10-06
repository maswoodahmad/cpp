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
    os << "_\ncarChassisNumber: " << rhs._carChassisNumber
       << "\tbrand: " << rhs._brand
       << "\tcarModel: " << rhs._carModel
       << "\ttype: " <<DisplayEnum( rhs._type)
       << "\tcarPrice: " << rhs._carPrice
       << "\tcarSeatCount: " << rhs._carSeatCount
       << "\tarFuelCapacity: " << rhs._carFuelCapacity;
    return os;
}

std::string DisplayEnum(const CarType value)
{

    if (value == CarType::SEDAN)
    {
        return "SEDAN";
    }
    else if (value == CarType::SUV)
    {
        return "SUV";
    }
    else
    {
        return "SPORTS_HATCHBACK";
    }
    return "none";
}
