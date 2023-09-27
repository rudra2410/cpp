#include <iostream>

using namespace std;

void test(int  unit)
{
    float amount,totalamount,surcharge;


if(unit <= 100)
{
    amount = unit * 0.60;
}

else if(unit <=200)
{

    amount = 50 + ((unit-100) * 0.80);
}

else if(unit >= 300)
{
    
    amount = 50 +((unit-200) * 0.90);
}

if (amount > 300)
{
    surcharge = amount * 0.15;
}

totalamount = amount + surcharge;

cout<<"bill =RS." << totalamount << " ";

}

int main()
{
    int unit;

    cout<<"ENter the unit :";
    cin>>unit;

    test(unit);
}

