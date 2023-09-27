#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,length;
    char arry[20];
    

    cout<<"string value :";
    cin>>arry;


    for (i = 0; arry[i] != '\0'; i++)
	{
	    length = i;
         cout<<"arry[] value is :  \n" <<  i << arry[i] << "  ";
	 
	}   

   	cout<<"string length = "<< i;

    return 0;

    
}