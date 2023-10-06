#include "Functionalities.h"
#include "Customer.h"

 

//Customer::Customer(int _customerID, std::string _customerName, Type _c_type, int _customerStoreCredits)
 void CustomerCreator(Customer *container[5])
{

container[0]= new Customer(101, "Satyam", Type::PREMIUM, 122);
container[1]= new Customer(102, "Gyan", Type::PREMIUM, 100);
container[2]= new Customer(103, "Sonu", Type::VIP, 40000);
container[3]= new Customer(104, "Krishna", Type::REGULAR, 130);
container[4]= new Customer(105, "Faiz", Type::PREMIUM, 54000);

        for(int i=0;i<5; i++){

        std::cout<< *(container[i])<<std::endl;

        }

}

void CreditInRange100_200(Customer* container[5], Customer* arr[5]){




for( int i=0; i<5;i++)
{

        int credit =(container[i])->customerStoreCredits(); 
        int k=0;
        if(credit>=100 && credit<=200)
        {
            arr[k++]=container[i];
        }
}



}

void TypeOfCustomer(Customer *container[5], Type type,Customer* arr[5])
{

    int k=0;
    for( int i =0; i<5 ;i++ ){

            Type deduced_type = (container[i])->cType();
            if( type==deduced_type) {
                arr[k++]=container[i];
            }
    }


}

float AverageOfCertainType(Customer *container[5], Type type)
{
    float avg=0.0f;
    int count=0;
    for(int i=0;i<5; i++)
    {

            Type deducedType = (container[i])->cType();
            if(deducedType==type) 
            {count++;

                avg += (container[i])->customerStoreCredits();
            }    
        
}

   return avg/count;
}

void FreeMemory(Customer *container[5])
{
    for(int i=0; i<5; i++) delete container[i];

}
