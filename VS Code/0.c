#include <stdio.h>

int total, mat, eng, guj, sci;
float per;

void setdata1()
{
    printf("Enter maths marks: ");
    cin("%d", &mat);

    printf("Enter english marks: ");
    cin("%d", &eng);

    printf("Enter gujarati marks: ");
    cin("%d", &guj);

    printf("Enter science marks: ");
    cin("%d", &sci);
}

float setdata2()
{

    if (mat < 35 || eng < 35 || guj < 35 || sci < 35)
    {
        printf("Student is fail");
    }
    else
    {
        total = mat + eng + guj + sci;

        per = total * 100 / 400;
    }
}
void setdata3()
{
    printf("\nTOTAL MARKS:%d", total);
    printf("\nPERCENTAGE IS:%0.2f", per);

    if (per >= 80)
    {
        printf("\nGRADE A");
    }
    else if (per >= 70 && per < 80)
    {
        printf("\nGRADE B");
    }
    else if (per >= 60 && per < 70)
    {
        printf("\nGRADE C");
    }
    else if (per >= 40)
    {
        printf("\nGRADE D");
    }
}

int main()
{
    setdata1();
    setdata2();
    setdata3();
}