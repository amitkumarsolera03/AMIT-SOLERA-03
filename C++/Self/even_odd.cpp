// Write a C++ program to check the given number is even or odd ??.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter your Number: \n ";
    cin >> n;
    if ( n % 2 == 0)
    {
        cout << " Entered number is an Even Number !! \n ";
    }
    else
    {
        cout << " Entered number is an Odd Number !! \n ";
    }

    return 0;
}