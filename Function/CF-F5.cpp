#include <iostream>

using namespace std;

int test(int celuse)
{
    int ferenhit;
    ferenhit= celuse * 32;
    cout<<"celuse : " << ferenhit;
}

int main()
{
    int celuse = 4;
    test(celuse);
}
 