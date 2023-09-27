#include <iostream>

using namespace std;

int main()
{
    int x,y,z;

    cout<<"Enter the value x:";
    cin>>x;
    
    cout<<"Enter the value y:";
    cin>>y;

    cout<<"Enter the value z:";
    cin>>z;


    if (x == y || x == z)
    {
        cout<<"this triangle is equal \n";
    }

    else if (x == y || y == z || z == x)
    {
        cout<<"this triangle is isoleted \n";
    }

    else
    {
        cout<<"the triangle is scalece \n";
    }


    
}