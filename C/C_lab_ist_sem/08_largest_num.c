// Write a C program to find the largest nuber among three numbers entered by user.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter your first number:-\n");
    scanf("%d", &a);
    printf("Enter your second number:-\n");
    scanf("%d", &b);
    printf("Enter your third number:-\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is the largest number.", a);
    }
    else if (b > a && b> c)
    {
        printf("%d is the largest number.", b);
    }
    else
    {
         printf("%d is the largest number.", c);
    }

    return 0;
}