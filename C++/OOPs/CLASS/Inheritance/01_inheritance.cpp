#include <iostream>
using namespace std;

class A
{
public:
    void display1()
    {
        cout << "This is Public Base Class.\n";
    }

protected:
    void display2()
    {
        cout << "This is protected Base Class.\n";
    }

private:
    void display3()
    {
        cout << "This is Private Base Class.\n";
    }
};
class B : public A
{
public:
    void show()
    {
        display1();
        display2();
        // display3();
        cout << "This is Public Derived Class.\n";
    }
};
int main()
{
    B ob;
    // ob.display1();
    // ob.display2();
    // ob.display3();
    ob.show();
    return 0;
}