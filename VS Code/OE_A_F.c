#include <stdio.h>

void sum()
{
    int size,i,a[10];
    int even_sum = 0, odd_sum = 0;

    printf("\n Enter Arry of size :");
    cin("%d",&size);

    printf("\n Enter arry of element ");

    for ( i = 0; i < size; i++)
    {
        cin("%d",&a[i]);
    }
    
    for ( i = 0; i < size; i++)
    {
        if (a[i]%2== 0)
        {
            even_sum = even_sum + a[i];
        }

        else
        {
            odd_sum = odd_sum + a[i];
        }
        
    }

    printf("\n the sum of arry= %d ",even_sum);
    printf("\n the sum of arry=%d ",odd_sum);
    
}

int main()
{
    sum();
    return 0;
}