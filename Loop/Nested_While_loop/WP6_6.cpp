#include <iostream>

using namespace std;

int main()
{
	int i=1,j=10;
	
	while(i<=10)
	{
		j=1;

		while(j<=10)
		{
		cout<<i<<"  ";
		j+=2;
		}
		i+=2;
		cout<<"\n";
		}
		return 0;
}