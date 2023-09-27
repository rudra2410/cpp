#include <iostream>

using namespace std;

int main()
{
	int i,j;
	char currentchar = 'A';
	

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			
		cout<<currentchar++<<" ";
		}
		cout<<"\n";
		}
		return 0;

}