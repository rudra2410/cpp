#include <iostream>

using namespace std;

int main()
{
    int unit;
    float amt,total,surcharge;

    cout<<"Enter the unit :";
    cin>>unit;

    if (unit <= 100)
    {
        amt = unit * 0.60;
    }

    else if (unit <= 200)
    {
        amt = 50 + ((unit-100) * 0.80);
    }

    else if (unit <= 300)
    {
        amt = 50 +((unit-200) * 0.90);
    }

    if (amt > 300)
    {
        surcharge = amt * 0.15;
    }
    
    total = amt + surcharge;

    cout<<"Bill = "<< total;
    
    return 0;    
}