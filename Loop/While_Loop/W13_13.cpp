#include <iostream>


using namespace std;

int main()
{
	int i=2,sum=0;
	

	while(i<=10)
	{
		sum = sum+i;
		cout<<i<<" ";
		i+=2;
	}
	cout<< " \n Sum =" <<sum<< " "; 
	return 0;


}