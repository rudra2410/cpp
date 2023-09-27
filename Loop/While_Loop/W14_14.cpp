#include <iostream>

using namespace std;

int main()
{
	int i=1,n,sum=0;


	cout<<"Enter the value =";
	cin>>n;

	while(i<=n)
	{
		sum=i*i;
		cout<<sum<<" ";
		i++;
	}
	return 0;
}