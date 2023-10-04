#include "Vehicle.h"
#include "CarType.h"
#include<iostream>

Vehicle::Vehicle(int id, std::string _brand, VehicleType type, float price)
:_id(id), _brand(_brand), _type(type), _price(price)
{
}

Vehicle::Vehicle(int id, std::string _brand, VehicleType type)
:_id(id), _brand(_brand), _type(type)
{
}

float Vehicle::CalculateTax()
{
    return 0.18*_price;
}

float Vehicle::CalculateTax(float tax_parcent)
{
    return tax_parcent*_price/100;
}

float Vehicle::CalculateTax(float cgst, float sgst)
{
    return (cgst*_price) +(sgst*_price*3);
}

std::string DisplayEnum( const VehicleType value){


    if(value==VehicleType::BIKE) return "BIKE";
    else if(value==VehicleType::CAR) return "CAR";
    else return "OTHERS";


}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os<< "_id: " << rhs._id
       << " \t_brand: " << rhs._brand
       << " \t_type: " <<DisplayEnum( rhs._type)
       << " \t_price: " << rhs._price;
    return os;
}


