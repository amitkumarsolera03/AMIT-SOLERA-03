#include <iostream>
using namespace std;

int main()
{
    int row;
    char character = 'A' ;
    cout << "Enter no. of Rows : \n ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout <<character;
            character++;

        }
    cout<<"\n";
    }

    return 0;
}