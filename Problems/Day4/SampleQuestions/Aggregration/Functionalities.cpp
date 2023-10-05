#include "Functionalities.h"

void CreateObjects(Employee *e[3], Project *p[3])
{

p[0]= new Project("Autosar", 20, 200000.0f);
p[1]= new Project("ML", 36, 1000000.0f);
p[2]= new Project("Autosar", 48, 5500000.0f);

e[0]= new Employee("101","Sonu",150000.0f, Department::DEVELOPMENT, p[0] );
e[1]= new Employee("102","Monu",75000.0f, Department::TESTING, p[1] );
e[3]= new Employee("103","Ramu",125000.0f, Department::INTEGERATION, p[3] );

}

Employee *HighestPaidEmployee(Employee *e[3])
{
    Employee * emp= e[0];
    for(int i=0;i<3;i++ )
    {
           if( (e[i])->salary()> (emp)->salary()) emp=e[i]; 
    }
    return emp;
}

int CountOfCertainType(Employee *e[3], Department department)
{   int count=0;
    for( int i=0; i<3;i++ )
        if((e[1])->getDepartmentType()==department) count++;
    return count;
}

float AverageBudget(Project *p[3])
{ float total=0.0f;
    for( int i=0; i< 3; i++)
    { 
            total+=(p[i])->budget();
            total/=3;
    }
    return total;
}

void FreeMemory(Employee *e[3], Project *p[3])
{

    for( int i=0; i<3; i++)
    {

    delete (e[i])->getProject();
    delete e[i];

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
