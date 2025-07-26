#include <iostream>
using namespace std;

class add
{
public:
    int n;
    int sum =0;
    void display()
    {
        cout << "Enter the value of n : \n";
        cin >>n;
        for (int i = 0; i <= n; i++)
        {
        // sum =sum+i;
        sum +=i;
            
        }
        cout << "Sum is: \n"<< sum;
        
    }
};
int main()
{
    add sum;
    sum.display();

    return 0;
}