#include <stdio.h>

void loop2()
{
    int n,i;

    printf("Enter the value :");
    cin("%d",&n);

    for ( i = 2; i <= n; i+=2)
    {
        printf("%d \n",i);
    }
    
}

int main()
{
    loop2();
    return 0;
}