#include "Functionalities.h"
#include "Type.h"
#include "Vehicle.h"


void CreateObjects(Vehicle* container[3]){
//container's 0 index now hold the object in heap 
 container[0]=new Vehicle(101, "Maruti", Type::CAR, 870000.0f);
 container[1]=new Vehicle(102, "Honda", Type::CAR, 1170000.0f);
 container[2]=new Vehicle(103, "Toyota", Type::CAR, 4570000.0f);

}




float AveragePrice(Vehicle *container[3])
{
float total = 0.0f;
    for(int i=0; i<3; i++)
    {
        total+=(container[i])->price();
        total/=3;

    }
    return total;

    //if add is of oject use arrow symbol to derefrence 
    // using arrow instead if star
}

void CreateObjects(Card *container[5])
{
}
