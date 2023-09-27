#include <iostream>

using namespace std;

int main()
{
    int a;
 

    cout<<"Enter A value :";
    cin>>a;

   

    if (a % 5 == 0 && a % 3 == 0)
    {
        cout<<"A is Divisiable";
    }

    else
    {
        cout<<"not divisiable";
    }
    
    return 0;
    
}