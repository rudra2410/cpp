
#include<iostream>

using namespace std;
    
int array[3][3];
int sum=0;

int arr(int a)
{
    if (a==4)
    {
        return 0;
    }
    return arr(++a);
   
}
int arr2(int b)
{
     if (b==4)
    {
        return 0;
    }
   return arr(++b);
}
int main()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"\nenter value a[][]: "<< i <<j << "  ";
            cin>>array[i][j];
        }
    }
    cout<<"\n";

    for (int i = 0 ; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<array[i][j] << "  ";
        }   
          cout<<"\n";
    }

}