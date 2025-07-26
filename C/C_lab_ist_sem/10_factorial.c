// Write a C program to find factroial of a number using looping and recursion.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number :- ");
    scanf("%d", &n);

    // By using for loop is shown below
    
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial of the given number %d is %d \n", n, fact);

    // By using while loop is shown below
    int i = 1;
    fact = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of the given number %d is %d \n", n, fact);

    // By using do while loop is shown below

    i = 1;
    fact = 1;
    do
    {
        fact *= i;
        i++;
    } while (i <= n);
    printf("The factorial of the given number %d is %d \n", n, fact);

    return 0;
}