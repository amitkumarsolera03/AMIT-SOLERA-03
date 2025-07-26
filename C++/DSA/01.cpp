#include <iostream>
using namespace std;

int main(){
    int a[6]={5,4,10,1,6,2};
    int temp;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            temp = a[i];
            j=i-1;
            while (j>=0&& a[i]>temp)
            {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = temp;
        }
        
    }
    

    return 0;
}