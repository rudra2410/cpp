#include <stdio.h>

int charater(char c)
{
    if(c=='A' || ,c=='E' ||,c=='I' ||,c=='O' ||,c=='U' ||,c=='a' ||,c=='e' ||,c=='i' ||,c=='o' ||,c=='u')
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int value;

    printf("ENter charater :");
    cin("%c",&value);
 
    if(charater(value))
    {
        printf("this is vowel charater \n");
    }
    
    else
    {
        printf("this is contstant charater \n");
    }
    

    return 0;
}