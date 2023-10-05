#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;

public:
    int r = radius;

    void area(int r)
    {
        cout << 3.14 * r * r << " \n";
    }

    void circ(int r)
    {
        cout << 3.14 * 2 * r << " \n ";
    }
};

int main()
{
    int r1;
    cout << "ENter the value :";
    cin >> r1;

    int r2;
    cout << "ENter the value :";
    cin >> r2;

    Circle circle;

    circle.area(r1);
    circle.circ(r2);
}