#include <stdio.h>

void test(float inch)
{
    float centimeter;
    centimeter = inch * 2.54 ;
    printf("Inch : %.2f",centimeter);
}

int main()
{
    int inch = 11.50;
    test(inch);
}
 