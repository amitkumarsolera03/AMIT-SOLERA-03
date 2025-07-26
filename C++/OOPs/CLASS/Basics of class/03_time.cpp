#include <iostream>
using namespace std;
class time
{
    public:
    int time,second,hour,minute;
    void show()
    {
        cout<<"Enter your time :\n";
        cout<<"Enter hour (H) : ";
        cin>>hour;
        cout<<"Enter minute (M) : ";
        cin>>minute;
        cout<<"Enter second (S) : ";
        cin>>second;
        cout<<"Your entered time is : "<<hour<<"H :"<<minute<<"M :"<<second<<"S"<<endl;
        cout<<"Your entered time in second : "<<hour*3600+minute*60+second;
    }
};
int main(){
    time t;
    t.show();
    
    return 0;
}