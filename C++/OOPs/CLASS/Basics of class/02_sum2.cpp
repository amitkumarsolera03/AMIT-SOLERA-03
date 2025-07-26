#include <iostream>
using namespace std;

class add
{
    public:
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int sum = a+b+c+d+e;
    void display(){
        cout<<"Sum is: \n"<< sum;
    }
};
int main()
{
    add sum;
    sum.display();

    return 0;
}