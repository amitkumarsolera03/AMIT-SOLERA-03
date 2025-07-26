#include <stdio.h>

int main()
{
    int n;
    int div = 2;
    printf("Enter your number:-\n");
    scanf("%d", &n);
    if (div < n)
    {
        if (n % div == 0)
        {
            printf("Not prime \n");
        }
        else
        {
            printf("Prime \n");
            
            div = div + 1;
        }
    }

    return 0;
}