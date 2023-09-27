#include <stdio.h>

void test(int celuse)
{
    int ferenhit;
    ferenhit= celuse * 32;
    printf("celuse : %d",ferenhit);
}

int main()
{
    int celuse = 4;
    test(celuse);
}
 