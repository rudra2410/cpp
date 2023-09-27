#include <iostream>

using namespace std;

int main()
{
	int i=1,n=1,a=1;
	
	cout<<"enter the value =";
	cin>>n;

	while(i<=n)
	{
	cout<<i*a<< "  ";
	a = a*2;
	i++;
	}
	return 0;
}