#include <stdio.h>

int main()
{
    int n = 1, sum = 0;
    while (n <= 10)
    {
        printf("8 X %d = %d\n", n, 8 * n);
        n++;
    }
    for (int i = 0; i <= 10; i++)
    {
        sum += 8 * i;
        i++;
    }
    printf(" The solution is :-%d", sum);

    return 0;
}