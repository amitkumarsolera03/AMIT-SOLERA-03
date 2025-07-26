#include <stdio.h>

int main(){
    int n;
    printf("Enter your number : \n");
    scanf("%d",&n);
    if (n==0)
    {
        printf("%d is zero.",n);
    }
    else if (n>0)
    {
       printf("%d is Positive.",n);       
    }
    else
    {
       printf("%d is Negative.",n);
    }
    
    return 0;
}