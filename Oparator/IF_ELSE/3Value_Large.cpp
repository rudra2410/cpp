#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    

    cout<<"Enter value of a :";
    cin>>a;

    
    cout<<"Enter value of b :";
    cin>>b;

    
    cout<<"Enter value of c :";
    cin>>c;

   

    if (a >= b && a >= c)
    {
        cout<<"A ia largest";
    }

    if(b >= c && c >= a)
    {
        cout<<"B is largest";
    }

    if (c >= a && c >= b)
    {
        cout<<"C is largest";
    }

    return 0;
}