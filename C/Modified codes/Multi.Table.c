#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int i=1;
    while (i<11)
    {
        printf(" %d X %d = %d \n", x , i ,x*i);
        i++;
    }

    return 0;
}