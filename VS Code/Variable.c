#include <stdio.h>

int eng, hin, guj, total, per;

void test()
{
    // No Return - No Arugument

    printf("ENter marks of ENG = ");
    cin("%d", &eng);

    printf("ENter marks of HIN = ");
    cin("%d", &hin);

    printf("ENter marks of GUJ = ");
    cin("%d", &guj);

    total = eng + hin + guj;
    printf(" total mark =%d \n", total);

    per = total * 100 / 300;
    printf(" total per=%d \n", per);
}

int main()
{
    test();
    return 0;
}