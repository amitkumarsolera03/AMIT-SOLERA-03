#include <iostream>
using namespace std;

// class inside
class outside
{
    public:
    void show();
    // {
    //     cout<<"Inline Function ";
    // }
};

void outside::show(){
    cout<<"Outline Function ";
}

int main(){
    // inside in;
    outside out;
    out.show();

    return 0;
}