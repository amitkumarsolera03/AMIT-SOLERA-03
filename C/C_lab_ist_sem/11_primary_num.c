// Write a C program to display first 25 primary numbers and their sum.

// 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 87 89 97

#include <stdio.h>

int main() {
    int count = 0, n = 2, sum = 0;

    printf("First 25 prime numbers:\n");

    while (count < 25) {
        int prime = 1;

        if (n < 2) {
            prime = 0;
        } else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime) {
            printf("%d ", n);
            sum += n;
            count++;
        }

        n++;
    }

    printf("\nSum of the first 25 prime numbers: %d\n", sum);

    return 0;
}