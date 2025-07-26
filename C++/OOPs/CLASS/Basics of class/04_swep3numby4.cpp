#include <iostream>
using namespace std;
class swep
{
    public:
    int a,b,c,temp;
    void show(){
        cout<<"Enter the value of a: \n";
        cin>>a;
        cout<<"Enter the value of b: \n";
        cin>>b;
        cout<<"Enter the value of c: \n";
        cin>>c;
        temp=a;
        a=b;
        b=c;
        c=temp;
        cout<<"The sweped value :\n"<<"a is: "<<a<<endl<<"b is : "<<b<<endl<<"c is: "<<c<<endl;
    }
};
int main()
{
    swep s;
    s.show();

    return 0;
}