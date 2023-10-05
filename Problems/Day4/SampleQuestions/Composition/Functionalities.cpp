#include "Functionalities.h"

void CreateObjects(Employee *e[3])
{
 


e[0]= new Employee("101","Sonu",150000.0f, Department::DEVELOPMENT, new Project("Autosar", 20, 200000.0f) );
e[1]= new Employee("102","Monu",75000.0f, Department::TESTING, new Project("ML", 36, 1000000.0f));
e[3]= new Employee("103","Ramu",125000.0f, Department::INTEGERATION, new Project("Autosar", 48, 5500000.0f) );

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

float AverageBudget(Employee *e[3])
{ float total=0.0f;
    for( int i=0; i< 3; i++)
    { 
            total+=(e[i])->getProject()->budget();
            total/=3;
    }
    return total;
}

void FreeMemory(Employee *e[3])
{

    for( int i=0; i<3; i++)
    {

    // delete (e[i])->getProject();
    delete e[i];

    }
}
