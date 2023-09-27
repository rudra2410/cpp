#include <stdio.h>

void loop5()
{
    int i;

    printf("Enter the value :");
    cin("%d",&i);

    for ( i = 65; i <= 90; i++)
    {
        printf("%C - %c \n ",i,i+32);
    }
    
}

int main()
{
    loop5();
    return 0;
}