#include <iostream>

using namespace std;

int main()
{
    char i;

    for (i = 65; i <= 90; i+=2)

    {

        if (i % 4 == 1)

        {

            cout<<" "<<i;
        }

        else

        {

            cout<<" "<<i + 32;
        }
    }

    return 0;
}