#include <iostream>

using namespace std;

int main()
{
	int i=1,n,a=0,b=1,c;
	

	cout<<"Enter the Value =";
	cin>>n;

	c = a+b;
	cout<<c<<" ";

	while(i<=n)
	{
	c = a+b;
	cout<<c<<" ";
	a=b;
	b=c;
	i++;
	}
	return 0;

}