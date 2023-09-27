#include <iostream>

using namespace std;

int test(int area)
{
    float circle;
    circle = area * 3.14 ;
    cout<<"Area : " << circle;
}

int main()
{
    int area ;
    cin>>area;
    test(area);
}
 