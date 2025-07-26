#include <iostream>
using namespace std;

class code
{
    public:
    code()
    {
        cout<<"Object created.\n";
    }
    ~code(){
        cout<<"object destroyed. \n";
    }
};
int main(){
    code ob1,ob2;
    code ob3;
    // cout<<"Thanks!! \n";

    return 0;
}