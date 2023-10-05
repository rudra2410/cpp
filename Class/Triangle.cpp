#include <iostream>

using namespace std;

class triangle
{
private:
    int base, hight;

public:
    int b = base, h = hight;

    int area(int b, int h)
    {
        return 0.5 * b * h;
    }
    int circ(int b, int h)
    {
        return 3 * b;
    }
};

int main()
{
    int a, b;
    cout << "Enter The Value :";
    cin >> a >> b;

    triangle t1;
    cout << t1.area(a, b) << endl;
    cout << t1.circ(a, b);
    return 0;
}