#include <iostream>

using namespace std;

int main()
{
	char i = 65;

	while (i <= 90)
	{
		if (i % 2 != 0)
		{
			cout<<+32<<" ";
		}

        else
        {
            cout<<i<<" ";
        }
        i+=2;
        
	}
	return 0;
}