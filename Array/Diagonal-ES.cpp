#include <iostream>

using namespace std;

int main()
{
	int a[3][3],i,j,sum = 0;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"\n Enter the Arry =a[][]";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}

	cout<<"\n Diagonal element total : " << sum <<endl;
	
	return 0;

}