#include <iostream>
using namespace std;

class area
{
public:
    area()
    {

        int a, b;
        cout << "Enter the value of a and b : \n";
        cin >> a >> b;
        cout << "The area of a rectangular is : " << a * b << endl;
    }
    area(int c, int d)
    {
        cout << "The area of a rectangular is : " << c * d;
    }
};
int main()
{
    area a;
    area(3, 4);

    return 0;
}