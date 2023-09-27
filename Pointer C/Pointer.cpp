// pointer is use to only vairable address to create pointer.
#include <iostream>

using namespace std;

int main()
{
    int a = 10,*p;

    p = &a;

    cout<<"Value of a is : \n"<<a;
    // 10

    cout<<"Address of a is: \n"<<&a;
    // 6422300
    cout<<"Address a is p&:\n"<<p;
    // 6422300
    cout<<"Address of p is \n"<<p;
    // 6422296
    cout<<"Value of a using p: \n"<<*p;
    // 10
}