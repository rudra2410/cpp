#include <iostream>

using namespace std;

void test(int doller)
{
    int sum;
    sum = doller * 88;
    cout<<"Doller :" << sum;
}

int main()
{
    int doller;

    cout<<"Enter the doller :";
    cin>>doller;
    test(doller);
}
 