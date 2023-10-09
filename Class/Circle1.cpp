#include <iostream>

using namespace std;

class Circle
{
    private:
    int radius;

    public:
    Circle(int r)
    {
        int radius = r;
    }

    void area(int r)
    {
        cout<< 3.14 * r * r <<endl;
    }

    void circ(int r)
    {
        cout<< 3.14 * 2 * r << "\n";
    }
};

int main()
{
    int a;
    cout<<"Enter The Vlaue :";
    cin>> a;
    
   

    Circle c1(a);

    c1.area(a);
    c1.circ(a);
}