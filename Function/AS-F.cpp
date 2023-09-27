#include <iostream>

using namespace std;

int myarry()
{
    int a[10],i,n,sum = 0;
    
    cout<<"Enter arry of size :";
    cin>>n;

    cout<<"Enter arry of element :";

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout<<"Sum of arry= "<< sum << " ";
    
}   

int main()
{
    myarry();
    return 0;
}