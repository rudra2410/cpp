#include <stdio.h>

int grather(int number)
{
    if(number <= 100)
    {
        return 1;
    }

    else if(number == 100)
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

    if(grather(value))
    {
        printf("number is less then 100 \n");
    }
    
    else
    {
        printf("number is grather than 100 \n");
    }
    
    return 0;
}