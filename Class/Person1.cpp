#include <iostream>

using namespace std;

class Person
{
private:
    int age;
    string name, city;

public:
    Person(string n, string c, int a)
    {
    
        name = n;
        city = c;
        age = a;
    }
    
   

    void getname()
    {
        cout << name << endl;
    }

    void getcity()
    {
        cout << city << endl;
    }

    void getage()
    {
        cout << age << endl;
    }
};

int main()
{
    string b, c;
    int a;
    


        cout << " Name :";

        cin >> b;

        cout << " City : ";

        cin >> c;

        cout << " Age :";

        cin >> a;
    

    Person p1(b,c,a);


    p1.getage();
    p1.getname();
    p1.getcity();

    

    return 0;
}