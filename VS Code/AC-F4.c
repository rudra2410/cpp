#include <stdio.h>

void test(int area)
{
    float circle;
    circle = area * 3.14 ;
    printf("Area : %.2f",circle);
}

int main()
{
    int area = 10;
    test(area);
}
 