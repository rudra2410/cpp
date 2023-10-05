#include <iostream>

using namespace std;

class Student
{
    private:
    int age;
    string name;
    string cast;

    public:
    Student()
    {
        cout<<"Enter The Age :";
        cin>>age;
    }    

    Student(string name)
    {
        cout<<name<<endl;
    }


   void Func1()
   {
        cout<<"Namaste"<<endl;
   }

   void Func2()
   {
        cout<<"To Be Countiunes"<<endl;
   }
};

int main()
{
    Student s1;
    Student s2("RUdra");
  

    s1.Func1();
    s2.Func2();
}