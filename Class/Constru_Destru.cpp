#include <iostream>

using namespace std;

class class_name
{
    int a,b;

    public:
    // declaring Constructor :-
    class_name(int aa,int bb)
    {
        a = aa;
        b = bb;

        cout<<"Constructor is called"<<endl;
        cout<<"Enter Value of A = "<<a<<endl;
        cout<<"Enter Value of B = "<<b<<endl;
        cout<<a+b<<endl;
        cout<<endl;
    }
    // declaring destructor}

    ~class_name()
    {
        cout<<"Destructor is called"<<endl;
        cout<<"Enter Value of A = "<<a<<endl;
        cout<<"Enter Value of B = "<<b<<endl;
        cout<<a+b /2<<endl;
    }
    
    
};

int main()
{
    class_name c1(88,77);

}