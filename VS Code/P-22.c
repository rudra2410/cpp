#include <stdio.h>

void test(float basic)
{
    float gross,h;
    
if(basic <= 5000)
{
    h = (basic * 28/100);
}

else if(basic <= 10000)
{
    h = (basic * 42/100);
}

else if(basic >= 15000)
{
    h = (basic * 70/100);
}
gross = basic * h;
printf("%f",gross);
}

int main()
{
    int basic;

    printf("ENter the salary :");
    cin("%d",&basic);

    test(basic);
}

