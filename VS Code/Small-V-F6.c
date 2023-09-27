#include <stdio.h>

void checkPositiveNegative(int num) {
    if (num > 0) 
    {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) 
    {
        printf("%d is a negative number.\n", num);
    } else 
    {
        printf("Zero is neither positive nor negative.\n");
    }
}

int absoluteValue(int num) {
    if (num < 0) 
    {
        return -num; 
    }
    return num; 
}

int main() {
    int num;

    printf("Enter an integer: ");
    cin("%d", &num);

    checkPositiveNegative(num);

    int absNum = absoluteValue(num);
    printf("The absolute value of %d is %d.\n", num, absNum);

    return 0;
}
