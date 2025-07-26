#include <iostream>
using namespace std;

class add
{
public:
    int a[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    void display()
    {
        for (int i = 0; i < 5; i++)
            sum = sum + a[i];
        cout << "Sum is :\n"<< sum;
    }
};
int main()
{
    add sum;
    sum.display();

    return 0;
}