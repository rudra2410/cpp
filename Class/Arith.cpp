#include <iostream>
using namespace std;

class Arith
{
    int a,b;

    public:
    Arith()
    {
        cout<<"Enter The Value:";
        cin>>a>>b;
        cout<<a+b<<endl;

    }

    Arith(int a,int b ,string name)
    {   
       
        cout<<a*b<<endl;
        cout<<name<<endl;
    }
    ~Arith()
    {
        cout<<"My Name is RUdra"<<endl;
    }

    void Func1()
    {
        cout<<"Hello World";
    }

    // void Func2()
    // {
    //     cout<<"Namste";
    // }
};

int main()
{
    Arith a1;
    Arith a2(5,10,"RUdra");

     a1.Func1();
    // a1.Func2();
    
}