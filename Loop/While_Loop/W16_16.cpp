#include <iostream>

using namespace std;

int main()
{
	int i=1,n,sum=1;
	

	cout<<"enter the value =";
	cin>>n;

	while(i<=n)
	{
	sum = sum * 2 ;
	cout<<sum<<" ";
	i++;
	}
	return 0 ;
}