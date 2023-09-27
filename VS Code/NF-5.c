#include <stdio.h>

void myloop5()
{
    int i,j;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf(" * ");   
        }
        printf("\n");
    }
    
}

int main()
{
    myloop5();
    return 0;

}