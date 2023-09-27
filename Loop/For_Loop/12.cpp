#include <iostream>

using namespace std;

int main()
{
	int i,n,sum=0;
	

	cout<<"Enter The Value = ";
	cin>>n;

	for(i=1; i<n; i+=2)
	
    {
	
    sum += i;
	
    }
	
    cout<<"Sum of odds number = "<<sum;
	
    return 0;

}
