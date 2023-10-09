#include <iostream>

using namespace std;

class triangle
{
    private:
    int base, hight;

    public:
    triangle(int b,int h)
    {
        int base = b, hight = h;

        // cout<<"Enter the Vlaue :";
        // cin>>b;
        
        // cout<<"Enter the Vlaue :";
        // cin>>h;
    }
    

    int area(int b, int h)
    {
        return 0.5 * b * h;
    }
    int circ(int b,int h)
    {
        return 3 * b;
    }
};

int main()
{
    int a, b;
    cout << "Enter The Value :";
    cin >> a >> b;

    triangle r1(a,b);

    cout << r1.area(a, b)<<endl;
    cout << r1.circ(a, b)<<endl;
    return 0;
}