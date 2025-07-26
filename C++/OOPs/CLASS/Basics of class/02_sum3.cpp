#include <iostream>
using namespace std;

class add
{
public:
    int a, b, c, d, e;
    int sum ;
    void display()
    {
        cout << "Enter the 5 values : \n";
        cin >> a >> b >> c >> d >> e;
        sum = a + b + c + d + e;
        cout << "Sum is: \n"<< sum;
    }
};
int main()
{
    add sum;
    sum.display();

    return 0;
}