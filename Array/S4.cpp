#include <iostream>

using namespace std;

int main()
{
	int i,n,a[10];
	int even = 0, odd = 0;

	
	cout<<"\nEnter arry of value :";
	cin>>n;

	cout<<"\nEnter  arry of element :";

	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}

	for(i=0; i<n; i++)

	{
		if(a[i]%2==0)
		{
			even=even +a[i];
		}

		else
		{
			odd = odd + a[i];
		}
	
	}
	
	cout<<"\n the sum of arry is even : "<< even;
	cout<<"\n the sum of arry is odd : "<< odd;
	
	return 0;
}