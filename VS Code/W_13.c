#include <stdio.h>

void myloop2()
{
    int n,i=1,sum=0;

    printf("Enter the value :");
    cin("%d",&n);

    while (i<=n)
    {
        printf("%d \n",i);
        sum = sum + i;
        i++;
    }
    printf("sum = %d",sum);
}

int main()
{
    myloop2();
    return 0;
}