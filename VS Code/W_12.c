#include <stdio.h>

void myloop1()
{
    int n,i=1;

    printf("Enter the value :");
    cin("%d",&n);

    while (i<=n)
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");

}

int main()
{
    myloop1();
    return 0 ;
}