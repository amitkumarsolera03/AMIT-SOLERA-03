#include <iostream>
using namespace std;

 int main(){
    int n;
    cout<<" Enter value : \n ";
    cin>> n ;
    switch (n)
    {
    case 10:
        cout<<" You Entered 10 \n ";
        break;
    case 20:
        cout<<" You Entered 20 \n ";
        break;
    case 30:
        cout<<" You Entered 30 \n ";
        break;
    
    default:
        cout<<" Na Munna Na \n ";
        break;
    }

    return 0;
}