#include <iostream>

using namespace std;

int main()
{

int salary;
float tex;

cout<<"Enter your slary :";
cin>>salary;

if (salary <= 2500)
{
    tex = salary * 0.05;
}

else if (salary > 2500 && salary <= 5000)
{
    tex = salary * 0.10;

}

else if (salary > 5000 && salary <= 10000)
{
    tex = salary * 0.20;
  
}

else
{
    tex = salary * 0.30;
}

cout<<"tex :" << tex;

}