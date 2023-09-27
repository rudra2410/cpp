#include <stdio.h>

void loop1()
{
    int i,n;

    printf("Enter the value :");
    cin("%d ",&n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d \n",i*i);
    }
    
}

int main()
{
    loop1();
    return 0;
}