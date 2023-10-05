#include <iostream>

using namespace std;

class Arith
{
    int No;
    int Eng,Hin,Guj,total=0;
    // string name;
    // int num;
    

    public:
    Arith()
    {
        cout<<"ENter the English Mark :";
        cin>>Eng;
        
        cout<<"ENter the Hindi Mark  :";
        cin>>Hin;
        
        cout<<"ENter the GUjarati Mark :";
        cin>>Guj;

        total = Eng + Hin + Guj ;
        cout<<"Sum = "<<total<<endl;
    }

    Arith(int No)
    {
        cout<<No<<endl;
    }

    Arith(string name)
    {
        cout<<"Your Name is :";
        cin>>name;
        cout<<name<<endl;
    }

    void Class(int num)
    {
       
        cout<<num<<endl;

    }

    void Class1(string name)
    {
        cout<<name<<endl;
    }
};

int main()
{
    Arith a1;
    Arith a2(1);
    Arith a3("Deny");

    a3.Class(1);
    a3.Class1("Ram");
    
   

}