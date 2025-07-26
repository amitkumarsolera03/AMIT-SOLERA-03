// Write a C++ program to check which number is Grater among Three Numbers ??.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << " Enter your First number :  ";
    cin >> num1;
    cout << " Enter your Second number :  ";
    cin >> num2;
    cout << " Enter your Third number :  ";
    cin >> num3;

    if (num1 != num2 && num1 != num3 || num2 != num1 && num2 != num3 || num3 != num2 && num3 != num1)
    {
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                cout << "First number is the Largest number.";
            }
        }

        if (num2 > num1)
        {
            if (num2 > num3)
            {
                cout << "Second number is the Largest number.";
            }
        }

        if (num3 > num1)
        {
            if (num3 > num2)
            {
                cout << "Third number is the Largest number.";
            }
        }
    }
    else
    {
        cout << " All numbers are equal to each other.";
    }

    return 0;
}