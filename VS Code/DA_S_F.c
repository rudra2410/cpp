#include <stdio.h>

void diagonal()
{
    int a[3][3],i,j,sum=0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\n Enter the Arry =a[%d][%d]",i,j);
            cin("%d",&a[i][j]);
        }
        printf("\n");
    }
    
  for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ",a[i][j]);
        }
          printf("\n");
    }

  for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
            
        }
    }


    printf("\n Diagonal elemet total :%d",sum);
}

int main()
{
    diagonal();
    return 0;
}      