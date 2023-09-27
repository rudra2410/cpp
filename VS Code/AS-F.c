#include <stdio.h>

void myarry()
{
    int a[10],i,n,sum = 0;
    
    printf("Enter arry of size :");
    cin("%d",&n);

    printf("Enter arry of element :");

    for ( i = 0; i < n; i++)
    {
        cin("%d",&a[i]);
    }
    

    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of arry=%d",sum);
    
}   

int main()
{
    myarry();
    return 0;
}