#include <iostream>

using namespace std;

class Person
{
private:
    int age;
    string name, city;

public:
    void setname(string r)
    {
        name = r;
    }

    void setcity(string u)
    {
        city = u;
    }

    void setage(int a)
    {
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
    

    for (int i = 0; i <= 2; i++)
    {
        cout << " Name :";

        cin >> b;

        cout << " City : ";

        cin >> c;

        cout << " Age :";

        cin >> a;
    }

    Person p1;

    p1.setage(a);
    p1.setname(b);
    p1.setcity(c);

    p1.getage();
    p1.getname();
    p1.getcity();

    Person p2;

    p2.setage(a);
    p2.setname(b);
    p2.setcity(c);

    p2.getage();
    p2.getname();
    p2.getcity();


}