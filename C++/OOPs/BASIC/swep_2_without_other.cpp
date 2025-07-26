#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter value of a:\n";
    cout << "Enter value of b:\n";
    cin >> a;
    cin >> b;
    cout << "Value of a before swep : " << a << endl;
    cout << "Value of b before swep : " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "value of a after swep : " << a <<endl;
    cout << "value of b after swep : " << b <<endl;

    return 0;
}