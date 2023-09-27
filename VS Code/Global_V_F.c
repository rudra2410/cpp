#include <stdio.h>

int total = 0,math,eng,guj;
float per;

void myloop1() 
// No Return --> No Arugument
{
    printf("enter Math mark:");
    cin("%d",&math);
    
    printf("enter Eng mark:");
    cin("%d",&eng);
    
    printf("enter guj mark:");
    cin("%d",&guj);

}

float myloop2()
{
    if (math <35 || eng <35 || guj <35 )
    {
        printf("student is fail");
    }

    else

    {
        total = math + eng + guj ;

        per = total * 100 / 400;
    }
    
    
}

void myloop3()
{
    printf("\n total marks :%d",total);
    printf("\n percentage :%.2f",per);

    if (per >= 90)
    {
        printf("grade A");
    }

    else if (per >= 70 && per <= 90)
    {
        printf("grade B");
    }

    else if (per >= 50 && per <= 70)
    {
        printf("grade C ");
    }

    else if (per >=35 && per <= 50)
    {
        printf("grade d");
    }

    else
    {
        printf("student is fail");
    }
    
}

int main()
{
    myloop1();
    myloop2();
    myloop3();

    return 0;
}