#include <iostream>

using namespace std;

int main()
{
    int a[5][5], i, j, sum = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout<<"\n Enter the Arry =a[][]";
            cin>>a[i][j];
        }
        cout<<"\n";
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j > i)
            {
                sum = sum + a[i][j];
            }
        }
    }

    cout<<"\n Diagonal element total : "<< sum << " ";

    
    return 0;
}