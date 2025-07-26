#include <iostream>
using namespace std;

class A
{
public:
    void display1()
    {
        cout << "This is a Public Super Class.\n";
    }
};
class B : public A
{
public:
    void display2()
    {
        cout << "This is First Public Child Class.\n";
    }
};
class C : public A
{
public:
    void display3()
    {
        cout << "This is Second Public Child Class.\n";
    }
};
class D : public B, public C
{
public:
    void show()
    {
        cout << "This is a Derived Class of B and C Class.\n";
    }
};

int main()
{
    B ob1;
    ob1.display1();
    ob1.display2();
    cout << "\n";
    C ob2;
    ob2.display1();
    ob2.display3();
    cout << "\n";
    D ob;
    ob.show();

    return 0;
}