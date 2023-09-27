#include <iostream>

using namespace std;

int main()
{
	int num,count,sum = 0;


	cout<<"Enter The Num = ";
	cin>>num;

	for(count=1; count<=num; ++count)
	{
		sum += count;
	}
	cout<<"Sum = "<<sum;
	
}