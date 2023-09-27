#include <iostream>

using namespace std;

int main()
{
    float salary,hra,da,gross;

    cout<<"Enter the salary  :";
    cin>>salary;

    if (salary < 5000)
    {
        hra = salary * 0.8;
        da = salary * 0.2;

    }

    else if (salary >= 5000 && salary < 10000)
    {
        hra = salary * 0.12;
        da = salary * 0.3;
    }
    
    else if (salary >= 10000 && salary < 15000)
    {
        hra = salary * 0.15;
        da = salary * 0.4;
    }

    else
    {
        hra = salary * 0.2;
        da = salary * 0.5;
    }

    gross = salary + hra + da ;

    cout<<"Gross salary =" << gross;

    return 0;
    
    
    
}