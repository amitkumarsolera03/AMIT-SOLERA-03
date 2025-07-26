#include <iostream>
using namespace std;

class A
{
public:
    void display1()
    {
        cout << "This is Public Base Class1.\n";
    }
};
class B : public A
{
public:
    void display2()
    {
        cout << "This is Public Base Class2.\n";
    }
};
class C : public B
{
public:
    void display3()
    {
        cout << "This is Public Base Class3.\n";
    }
};
class D : public C 
{
    public:
    void show()
    {
    // display1();
    // display2();
    // display3();
        cout << "This is Public Derived Class.";
    }
};
int main()
{
    D ob;
    ob.display1();
    ob.display2();
    ob.display3();
    ob.show();
    return 0;
}