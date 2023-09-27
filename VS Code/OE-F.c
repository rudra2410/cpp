#include <stdio.h>

void sum()
{
    int n,i,a[10];
    int even = 0 , int odd = 0;

    printf("\n enter arrry od n :");
    cin("%d", n);

    printf("\n enter arry of element :");

    for ( i = 0; i < n; i++)
    {
        cin("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if (a[i]%2== 0)
        {
            even = even + a[i];
        }
        else
        {
            odds = odds + a[i];
        }
        
    }

    printf("\n even sum =%d",even);
    printf("\n odd sum =%d",odds);
    
}

int main()
{
    sum();
    return 0;
}