#include<iostream>


class Complex
{
private:
float _real;
float _imaginary;
    /* data */
public:
    Complex(float real, float imag) {
        this->_real=real;
        this->_imaginary=imag;
    }
    Complex() =default;

    ~Complex(){
        std::cout<<"object destoyed\n";
    }

    Complex operator+(Complex c2){

        float r = this->_real + c2._real;
        float i = this->_imaginary + c2._imaginary;
        Complex temp(r,i);

        return temp;
    }



    friend std::ostream &operator<<(std::ostream &os, const Complex &rhs );


     
};

int main()
{
Complex c1(1.0f, 2.5f);
std::cout<<c1<<std::endl;
Complex c2(2.0f, 2.5f);

std::cout<<c1+c2<<std::endl;


}
inline std::ostream & operator<<( std::ostream &os, const Complex &rhs)
{
os<<"real part\t"<<rhs._real
<<"\timaginary part\t"<< rhs._imaginary;
return os;
}

