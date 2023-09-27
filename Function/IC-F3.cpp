#include <iostream>

using namespace std;

void test(float inch)
{
    float centimeter;
    centimeter = inch * 2.54 ;
    cout<<"Inch : " << centimeter;
}

int main()
{
    int inch ;
    cin>>inch;
    test(inch);
}
 