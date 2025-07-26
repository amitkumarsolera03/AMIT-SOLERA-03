// Write a C program to swap two numbers using the third number and without using third number.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d\n%d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);

    return 0;
}