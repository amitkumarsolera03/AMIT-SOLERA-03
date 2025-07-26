// Write a C program to mathematical (Arithmetic operation) operation of two numbers entered by user .

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter your first number:\n");
    scanf("%d",&a);
    printf("Enter your second number:\n");
    scanf("%d",&b);
    printf("The sum of %d and %d is %d\n",a,b,a+b);
    printf("The subtraction of %d and %d is %d\n", a, b, a - b);
    printf("The multiplication of %d and %d is %d\n", a, b, a * b);
    printf("The division of %d and %d is %d\n",a,b,a/b);

return 0;
}