#include <iostream>
using namespace std;

class student
{
    public :
    string name;
    int age;
    string branch;
    void introduction()
    {
        cout<<"Hii, My name is "<<name <<" and I am "<<age <<" year old."<<endl;
        cout<< "I am from "<<branch <<" Department." <<endl;
    }
};
int main(){
    student s1;
    s1.name = "Amit kumar verma";
    s1.age = 17;
    s1.branch = "CSE";
    s1.introduction();

    return 0;
}