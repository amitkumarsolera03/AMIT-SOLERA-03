#include <iostream>
using namespace std;

class student
{
    public :
    // string name;
    // int age;
    // string branch;
    student()
    {
        string name;
        int age;
        string branch;
        name = "Amit kumar verma";
        age = 17;
        branch = "CSE";
        cout<<"Hii, My name is "<<name <<" and I am "<<age <<" year old."<<endl;
        cout<< "I am from "<<branch <<" Department." <<endl;

    }
};
int main(){
    // student s1;
    student();

    return 0;
}