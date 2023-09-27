#include<stdio.h>

int array[5];

int sum=0;

int arr(int a)
{
    if (a==9)
    {
        return 0;
    }
    return arr(++a);
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("enter value a[%d]: ",i);
        cin("%d",&array[i]);

        sum=sum+array[i];   
    }
    printf("total sum=%d",sum);
}