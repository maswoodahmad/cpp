#include "Functionalities.h"
#define SIZE 3


void CreateObjects(Employee *e[SIZE])
{
    e[0] = new Employee("101", "gyan", 125000.0f, Department::DEVELOPMENT, new Project("AUTOSAR", 24, 14235235235.0f));
    e[0] = new Employee("102", "sonu", 125000.0f, Department::TESTING, new Project("AUTOSAR", 24, 14235235235.0f));
    e[2] = new Employee("103", "shubham.com", 125000.0f, Department::DEVELOPMENT, new Project("AUTOSAR", 24, 145235235.0f));
}

Employee* HighestPaidEmployee(Employee *e[SIZE])
{   
    if(CheckNull(e)) 
    {
        throw std::runtime_error("Container is empty");
    }
    Employee * emp = e[0];
    for (int i = 1; i <SIZE; i++)
    {
        if ((e[i])->salary() > (emp)->salary())
            emp = e[i];
    }
    return emp;
}

int CountOfCertainType(Employee *e[SIZE], Department department)
{   
    if(CheckNull(e)) 
    {
        throw std::runtime_error("container is emoty");
    }
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        bool flag = (e[i])->getDepartmentType() == department;
        if (flag)
        {
            count++;
        }
    }
    return count;
}

float AverageBudget(Employee *e[SIZE])
{   
    if(CheckNull(e)) {
        throw std::runtime_error("contianer is empty");
    }
    float total = 0.0f;
    for (int i = 0; i < SIZE; i++)
    {

        Project *p = (e[i])->getProject();
        total += (p)->budget();
        total /= SIZE;
    }
    return total;
}

void FreeMemory(Employee *e[SIZE])
{
    
    for (int i = 0; i < SIZE; i++)
    {
        // delete (e[i])->getProject();
        delete (e[i]);
    }
}

std::string DisplayEnum(const Department value)
{
    if (value == Department::DEVELOPMENT)
        {
            return "Development";
        }  
    else if (value == Department::DEVELOPMENT)
       { 
        return "Integaration";
        }
    else
        {
        return "Testing";
    }
}

bool CheckNull(Employee *arr[SIZE]) {
bool flag = true;
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[i]!=nullptr) return false;
    }
return flag;

}

