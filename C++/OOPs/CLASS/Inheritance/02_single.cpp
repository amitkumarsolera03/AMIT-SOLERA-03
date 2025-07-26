#include <iostream>
using namespace std;

class A
{
public:
    void display1()
    {
        cout << "This is Public Base Class.\n";
    }
};
class B : public A
{
    public:
    void show()
    {
        cout << "This is Public Derived Class.";
    }
};
int main()
{
    B ob;
    ob.display1();
    ob.show();
    return 0;
}