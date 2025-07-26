#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;
    cout << " Enter 5 numbers: \n";
    for (int a = 0; a < 5; a++)
    {
        cin >> arr[a];
        sum = sum + arr[a];
    }

    // for (int i = 0; i < 5; i++)
    // {
    // }
    cout << sum;

    return 0;
}