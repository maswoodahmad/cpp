#include<iostream>
class Demo2
{
private:
    /* data */

public:
    Demo2(/* args */) =default;

    void magic(){
        std::cout<<"something";
    }

void display() const{
std::cout<<"this works\n";
}


    ~Demo2() {}
};

int main(){
    const Demo2 e1;//object on stack

    //e1.magic();// can't call non const memebr funtion on a const object

    e1.display();//its works becuase display function have const 
}