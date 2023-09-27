#include <iostream>

using namespace std;

int main()
{
	int i=65,j=69;
	char n='A';
	

	while(i<=69)
	{
		j=65;

		while(j<=i)
		{
		cout<<n<<" ";
		n++;
		j++;
		}
		i++;
		cout<<"\n";
		}
		return 0;
}
