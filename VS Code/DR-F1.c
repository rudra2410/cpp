#include <stdio.h>

void test(int doller)
{
    int sum;
    sum = doller * 88;
    printf("Doller : %d",sum);
}

int main()
{
    int doller;

    printf("Enter the doller :");
    cin("%d",&doller);
    test(doller);
}
 