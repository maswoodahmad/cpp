#include<iostream>
template <typename T>
void display(T arr[3]){

for( int i=0;i<3; i++){
    std::cout<<"address\t"<<(arr[i])->address()<<std::endl;
}

}




class Car{

    private:
    std::string _address;
    public:
    Car()=default;
    Car( std::string add):_address(add){}
    ~Car(){

    }

    std::string address() const { return _address; }
};


class Employee{

    private:
     std::string _address;
    public:
    Employee()=default;
    Employee(std::string add) :_address(add){}
    ~Employee(){

    }

    std::string address() const { return _address; }
};

int main(){


Car* arr1[3];
Employee* arr2[3];

std::string add[]{"pune","mumbai","delhi"};

for( int i=0;i<3 ;i++)
{
    arr1[i]=new Car(add[i]);
    arr2[i]=new Employee(add[i]);
}

display<Car*>(arr1);
display<Employee*>(arr2);
//display(arr2);

}