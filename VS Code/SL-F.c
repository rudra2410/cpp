#include <stdio.h>

void print()
{
    int i,lengh;
    char str[20];

    printf("String value = ");
    cin("%d",&str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        lengh = i;
        printf("str[%d] value is :%c \n",i,str[i]);
    }

    printf("String lengh =%d",i);
    
}

int main()
{
    print();
    return 0;
}