// Write by ma'am but how ??


#include <stdio.h>
int summation(int[]);
void main(){
    int a[5] = {0,1,2,3,4};
    int sum = summation(a);
    printf("%d", sum);
}
    int summation (int a[])
    {
        int sum=0;
        for (int i = 0; i < 5; i++)
        {
            sum=sum+ a[i];
        }

    return sum;
}