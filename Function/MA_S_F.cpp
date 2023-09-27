#include <iostream>

using namespace std;

void arry()
{
    int a[3][3],i,j,sum= 0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<("\n Enter Arry =a[][]");
            cin>>a[i][j];
        }
        

    }
    
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
            sum += a[i][j];
        
        }
        cout<<("\n");
    }

    cout<<"2Arry of sum= " << sum;

}

int main()
{
    arry();
    return 0;
}