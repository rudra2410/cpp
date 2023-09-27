#include <stdio.h>

int divisible(int number)
{
    if(number % 5 == 0 )
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int value;

    printf("ENter A Value :");
    cin("%d",&value);

    if(divisible(value))
    {
        printf("divisible \n");
    }
    else
    {
        printf("Not divisible");
    }
    

    return 0;
}