#include <iostream>

using namespace std;

int divisible(int number)
{
    if(number % 5 == 0 )
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int value;

    cout<<"ENter A Value :";
    cin>>value;

    if(divisible(value))
    {
        cout<<"divisible \n";
    }
    else
    {
        cout<<"Not divisible";
    }
    

    return 0;
}