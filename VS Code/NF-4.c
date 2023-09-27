#include <stdio.h>

void myloop4()
{
    int i,j;
    char current = 'A';

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            printf("%c  ",current);
            current++;
        }
        printf("\n");
    }
    
}

int main()
{
    myloop4();
    return 0;
}
