#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "VehicleType.h"
class Vehicle 
{
private:
 int _id;
 std::string _brand;
 VehicleType _type;
 float _price;
public:
    Vehicle()=delete;
    Vehicle(const Vehicle&)= default;
    Vehicle(
     int id,
     std::string _brand,
     VehicleType type,
     float price
     );

    Vehicle(
    int id ,
    std::string _brand,
    VehicleType type
    );



    
     ~Vehicle() {

        std::cout
        <<"vehcile with id:"
        <<_id
        <<"is destroyed\n";
    }


//operator overloading
float operator+ (Vehicle v1){
return this->price() + v1.price();
}



    int id() const { return _id; }

    VehicleType type() const { return _type; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    float CalculateTax();
    float CalculateTax(float tax_parcent);
    float CalculateTax(float cgst, float sgst);
  

    
};

std::string DisplayEnum(const VehicleType value);


#endif // VEHICLE_H
