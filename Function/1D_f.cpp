#include<iostream>

using namespace std;

int array[5];

int sum=0;

int arr(int a)
{
    if (a==9)
    {
        return 0;
    }

    return arr(++a);
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout<<"enter value a[]: " << i;
        cin>>array[i];

        sum=sum+array[i];   
    }
    cout<<"total sum= "<< sum;
}