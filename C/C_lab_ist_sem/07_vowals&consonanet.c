// Write a C program to whather a character entered by user is vowals or consonanet.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter ypur character here :- ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Your entered character %c is vowals.",ch);
    else
        printf("Your entered character %c is consonanet.",ch);

    return 0;
}