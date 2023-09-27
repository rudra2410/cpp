#include <stdio.h>

void myloop5()
{
    int i =65;

    while (i<=90)
    {
        printf("%c - %c  ",i,i+32);
        i++;
    }
    
}

int main()
{
    myloop5();
    return 0;
}