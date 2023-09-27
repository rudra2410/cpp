#include <iostream>

using namespace std;

int main()
{
    int year;
 

    cout<<"Enter A year :";
    cin>>year;

   

    if (year % 100 == 0)
    {
        cout<<"THis year is century year";
    }

    else
    {
        cout<<"NOt century year";
    }
    
}