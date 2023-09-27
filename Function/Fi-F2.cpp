#include <iostream>

using namespace std;

void test(int feet)
{
    int inch;
    inch = feet * 12;
    cout<<"Feet : " << inch <<" ";
}

int main()
{
    int feet;

    cout<<"Enter the feet : ";
    cin>>feet;
    
    test(feet);
}
