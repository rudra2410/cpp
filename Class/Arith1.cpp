#include <iostream>

using namespace std;

class Arith
{
    int a,b;
    string name;

    public:
    
    ~Arith()
    {
        cout<<"Destrcuter is running";
    }


    Arith()
    {
        cout<<"Enter the Value :";
        cin>>a>>b;
        cout<<a+b<<endl;

    }

    void fun1()
    {
        cout<<"Namsate"<<endl;
    }
};

int main()
{
    Arith a1;

    a1.fun1();
}