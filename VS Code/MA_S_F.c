#include <stdio.h>

void arry()
{
    int a[3][3],i,j,sum= 0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\n Enter Arry =a[%d][%d]",i,j);
            cin("%d ",&a[i][j]);
        }
        

    }
    
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ",a[i][j]);
            sum += a[i][j];
        
        }
        printf("\n");
    }

    printf("2Arry of sum=%d",sum);

}

int main()
{
    arry();
    return 0;
}