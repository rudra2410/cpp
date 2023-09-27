#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,length,j=0;
    char str[20];
    char str2[40];
    

    cout<<"string value :";
    cin>>str;


    for (i = 0; str[i] != '\0'; i++)
	{
	length = i;	 
	}   

    for (i =length; i >= 0; i--)
	{
		str2[i] = str[j];
		j++;
	}   
   	
	cout<<"reverse string = "<< str2 << endl;
 
    return 0;
}