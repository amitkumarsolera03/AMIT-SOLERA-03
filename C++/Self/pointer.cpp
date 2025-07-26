#include <iostream>
using namespace std;
int main()
{
    int number = 30;
    int*ptr;
    ptr = &number; // stores the address of number variable
    cout << "Address of number variable is:" << &number << endl;
    cout << "Address of p variable is:" << ptr << endl;
    cout << "Value of p variable is:" << *ptr << endl;
    return 0;
}
