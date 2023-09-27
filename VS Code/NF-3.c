#include <stdio.h>

void myloop3()
{
    int i,j;

    for ( i = 1; i <=10; i+=2)
    {
        for ( j = 1; j <=10; j+=2)
        {
            printf("%d ",i);
        }
        printf("\n");
        
    }
    
}

int main()
{
    myloop3();
    return 0 ;
}