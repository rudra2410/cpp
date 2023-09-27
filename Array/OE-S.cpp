#include <iostream>

using namespace std;

int main()
{
	int n,i,a[10];
	int Even_sum = 0,Odd_sum = 0;

	cout<<"\n Enter Arry of size =";
	cin>>n;

	cout<<"\n Enter arry of ELements\n";

for(i=0; i < n; i++)
	{

	cin>>a[i];

	}

for(i=0; i < n; i++)
	{

	if(a[i] % 2 == 0)
	{

		Even_sum = Even_sum + a[i];
	}
	else
	{
		Odd_sum = Odd_sum + a[i];
	
		}
	}

	cout<<"\n The sum of even number in arry =" << Even_sum << endl;
	cout<<"\n The sum of odds number in arry =" << Odd_sum << endl;

	return 0;
}