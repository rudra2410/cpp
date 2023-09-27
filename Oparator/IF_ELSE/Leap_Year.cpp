#include <iostream>

using namespace std;

int main()
{
    int year;
 

    cout<<"Enter A year :";
    cin>>year;

   

    if (year % 4 == 0)
    {
        cout<<"THis year is leap year";
    }

    else
    {
        cout<<"NOt leap year";
    }
    
}