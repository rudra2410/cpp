#include <stdio.h>


int findpositive(float , float);

int main()
{
    int num1,num2,positive,Nagative;

    printf("ENter Any Two value :");
    cin("%d %d",&num1,&num2);

    positive = findpositive(num1 , num2);
    Nagative = findpositive(num1 , num2);

    printf("Positive = %f",positive);
    printf("Nagative =%d",Nagative);

    
}

int findpositive(float a ,float b)
{
    if (a >= 0)
    {
        return a;
    }
    else
        return b;
    
}
