#include <iostream>
using namespace std;

class ractangle
{
private:
    int length, height;

public:
    int i = length, h = height;

    int area(int l, int h)
    {
        return l * h;
    }
    int circ(int l, int h)
    {
        return 2 * (l + h);
    }
};

int main()
{
    int a, b;
    cout<<"Enter The Value :";
    cin >> a >> b;

    ractangle r1;
    cout << r1.area(a, b) << endl;
    cout << r1.circ(a, b);
    return 0;
}