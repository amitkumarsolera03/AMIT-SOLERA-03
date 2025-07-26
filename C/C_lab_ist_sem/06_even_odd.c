// Write a C program to whether a number is even or odd.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter your first number:-\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The given number %d is even .", a);
    }
    else
    {
        printf("The given number %d is odd", a);
    }

    return 0;
}