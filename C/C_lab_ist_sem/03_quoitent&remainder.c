// Write a C program to find the quoitent and remainder of two numbers entered by user

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your first number:-\n");
    scanf("%d", &a);
    printf("Enter your second number:-\n");
    scanf("%d", &b);
    printf("The quoitent of %d and %d is %d\n", a, b, a / b);
    printf("The remainder of %d and %d is %d\n", a, b, a % b);

    return 0;
}