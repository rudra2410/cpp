#include <stdio.h>

void myloop1()
{
    int i,j;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        
    }
    
}
         
int main()
{
    myloop1();
    return 0;
}