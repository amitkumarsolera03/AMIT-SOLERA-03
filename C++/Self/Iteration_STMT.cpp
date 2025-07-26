// Write a C++ program to print numbers from 1 to 10 by loops

#include <iostream>
using namespace std;

int main()
{
    int a = 1;

    // Using for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ",";
    }
    cout << "\n";
    // Using while loop
    while (a <= 10)
    {
        cout << a << ",";
        a++;
    }
    cout << "\n";

    // Using do while loop
    a = 1;
    do
    {
        cout << a << ",";
        a++;
    } while (a <= 10);
    cout << "\n";

    return 0;
}