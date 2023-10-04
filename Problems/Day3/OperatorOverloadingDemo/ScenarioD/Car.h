#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
#include <ostream>


class Car:public Vehicle
{
private:
    CarType _car_type;
public:
    Car( 
    int id,
     std::string _brand,
     VehicleType type,
     float price,
     CarType carType
     
      );

    Car( 
    int id,
     std::string _brand,
     VehicleType type,
     CarType carType
     );

    

   
    ~Car() {

        std::cout<<"car part of vehicle id:\t"<<id()<<"\tdestroyed\n"<<std::endl;
    }
    CarType  carType() const{
        return _car_type;
    }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    
};
std::string DisplayEnum ( const CarType value);
#endif // CAR_H
