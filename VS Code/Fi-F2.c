#include <stdio.h>

void test(int feet)
{
    int inch;
    inch = feet * 12;
    printf("Feet : %d", inch);
}

int main()
{
    int feet;

    printf("Enter the feet : ");
    cin("%d",&feet);
    
    test(feet);
}
