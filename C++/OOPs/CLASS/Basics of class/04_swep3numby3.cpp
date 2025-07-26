#include <iostream>
using namespace std;
class swep
{
    public:
    int a,b,c;
    void show(){
        cout<<"Enter the value of a: \n";
        cin>>a;
        cout<<"Enter the value of b: \n";
        cin>>b;
        cout<<"Enter the value of c: \n";
        cin>>c;
        a=a+b+c;
        b=a-b-c;
        c=a-b-c;
        a=a-b-c;


        cout<<"The sweped value :\n"<<"a is: "<<a<<endl<<"b is : "<<b<<endl<<"c is: "<<c<<endl;
    }
};
int main()
{
    swep s;
    s.show();

    return 0;
}