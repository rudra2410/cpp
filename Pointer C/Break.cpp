#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 50; i++)
    {
        cout << i << " ";

        if (i == 30)
        {
            break;
        }
        cout << "\n";
    }
}