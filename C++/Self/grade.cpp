// Write a C++ program to check students Grade .

#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << " Enter your obtained grade: \n ";
    cin >> grade;
    if (50 <= grade <= 100)
    {
        cout << " Congrates !! \n ";
    }
    if (grade > 100 || grade < 0)
    {
        cout << " Entered grade is Invalid !! \n ";
    }
    else if (90 <= grade <= 100)
    {
        cout << " You obtained 'Grade : A+'. \n ";
    }
    else if (80 <= grade < 90)
    {
        cout << " You obtained ' Grade : A '. \n ";
    }
    else if (70 <= grade < 80)
    {
        cout << " You obtained ' Grade : B '. \n ";
    }
    else if (60 <= grade < 70)
    {
        cout << " You obtained ' Grade : C '. \n ";
    }
    else if (50 <= grade < 60)
    {
        cout << " You obtained ' Grade : D '. \n ";
    }
    else
    {
        cout << " You are ' Failed ' . So try again next time . \n ";
    }

    return 0;
}