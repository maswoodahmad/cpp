#include "Car.h"


Car::Car(int id, std::string _brand, VehicleType type,float price, CarType carType)
:Vehicle(id, _brand, type, price), _car_type(carType)
{
}

Car::Car(int id, std::string _brand, VehicleType type, CarType carType)
:Vehicle(id, _brand, type ), _car_type(carType)
{
}



std::ostream &operator<<(std::ostream &os, const Car &rhs) {
        os<<static_cast<const Vehicle &>(rhs)
       << "\t _car_type: " <<DisplayEnum( rhs._car_type);
    return os;
}

std::string DisplayEnum(const CarType value){
if(value==CarType::SEDAN) return "SEDAN";
if(value==CarType::SUV) return "SUV";
return "HATCHBACK";


}