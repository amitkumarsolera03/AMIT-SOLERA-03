// Write a C program to calculate the sum of natural number.

#include <stdio.h>

int main()
{
    int n,a;
    printf("Enter your first number:-\n");
    scanf("%d", &n);
    int sum = 0;

    // By using for loop is shown below

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of %d numbers is :- %d\n", n, sum);

    // By using while loop is shown below

    a = 1;
    sum=0;
    while (a <= n)
    {
        sum += a;
        a++;
    }
    printf("The sum of %d numbers is :- %d\n", n, sum);

    // By using Do-while loop is shown below

    a = 1;
    sum = 0;
    do
    {
        sum += a;
        a++;
    } while (a <= n);

    printf("The sum of %d numbers is :- %d\n", n, sum);

    return 0;
}