#include <iostream>
#include <list>
// alias for data type
using ls = std::list<std::string>;
template <typename T>

class Employee
{

private:
    T _skills;
    std::string _id;
    int _age;

public:
    // Employee()=default;
    Employee(T skills, std::string id, int age) : _skills(skills), _id(id), _age(age) {}
    ~Employee()
    {
        std::cout << "employee with \t" << _id << "\tdestroyed\n";
    }

    template <typename A>
    friend std::ostream &operator<<(std::ostream &os, const Employee<A> &rhs)
    {
        os << "_skills:[";
        for (std::string element : rhs._skills)
        {
            os << element << ",";
        }
        os << "]\n_id: " << rhs._id
           << " _age: " << rhs._age;
        return os;
    }
};

int main()
{

    // object of class employee of list of strings
    // Employee<std::list<std::string>>* e1 = new Employee<std::list<std::string>>()
    ls skills = {"coding", "ai", "vc"};
    Employee<ls> *e1 = new Employee<ls>(skills, "f234", 24);
    std::cout << *e1;
}