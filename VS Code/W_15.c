#include <stdio.h>

void myloop4()
{
    int i=1,n;

    printf("Enter the value :");
    cin("%d",&n);

    while (i<=n)
    {
        if (i%2==0)
        {
            printf("%d \n",i);
        }
        i++;
    }
    
}

int main()
{
    myloop4();
    return 0;
}