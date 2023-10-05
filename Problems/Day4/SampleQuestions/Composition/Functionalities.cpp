#include "Functionalities.h"

void CreateObjects(Employee *e[3])
{
    e[0] = new Employee("101", "gyan", 125000.0f, Department::DEVELOPMENT, new Project("AUTOSAR", 24, 14235235235.0f));
    e[1] = new Employee("102", "sonu", 125000.0f, Department::TESTING, new Project("AUTOSAR", 24, 14235235235.0f));
    e[2] = new Employee("103", "shubham.com", 125000.0f, Department::DEVELOPMENT, new Project("AUTOSAR", 24, 145235235.0f));
}

Employee *HighestPaidEmployee(Employee *e[3])
{    if(CheckNull(e)) return nullptr;
    Employee * emp = e[0];
    for (int i = 1; i < 3; i++)
    {
        if ((e[i])->salary() > (emp)->salary())
            emp = e[i];
    }
    return emp;
}

int CountOfCertainType(Employee *e[3], Department department)
{   if(CheckNull(e)) return 0;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        bool flag = (e[i])->getDepartmentType() == department;
        if (flag)
        {
            count++;
        }
    }
    return count;
}

float AverageBudget(Employee *e[3])
{   if(CheckNull(e)) return 0.0f;
    float total = 0.0f;
    for (int i = 0; i < 3; i++)
    {

        Project *p = (e[i])->getProject();
        total += (p)->budget();
        total /= 3;
    }
    return total;
}

void FreeMemory(Employee *e[3])
{
    if(CheckNull(e)) return;
    for (int i = 0; i < 3; i++)
    {

        // delete (e[i])->getProject();
        delete (e[i]);
    }
}

std::string DisplayEnum(const Department value)
{

    if (value == Department::DEVELOPMENT)
        return "Development";
    else if (value == Department::DEVELOPMENT)
        return "Integaration";
    else
        return "Testing";
}