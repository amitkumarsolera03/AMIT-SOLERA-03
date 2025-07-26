// Write a C program to find &print the size of char, int, float, double, long, long long.

#include <stdio.h>

int main()
{
    printf("The size of an int data-type is %d bytes \n", sizeof(int));
    printf("The size of a float data-type is %d bytes \n", sizeof(float));
    printf("The size of a char data-type is %d byte \n", sizeof(char));
    printf("The size of a long data-type is %d bytes \n", sizeof(long));
    printf("The size of a long long data-type is %d bytes \n", sizeof(long long));
    printf("\nThis was an another method to print the size of any data-types.\n\ns");
    printf("Size of int: %zu bytes \n", sizeof(int));
    printf("Size of float: %zu bytes \n", sizeof(float));
    printf("Size of char: %zu byte \n", sizeof(char));
    printf("Size of long: %zu bytes \n", sizeof(long));
    printf("Size of long long: %zu bytes \n", sizeof(long long));

    return 0;
}