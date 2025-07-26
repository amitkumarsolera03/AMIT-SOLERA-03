#include <iostream>
using namespace std;

int main(){
    struct node
    {
        int data;
        struct node*next;
    };
    struct node*head,*ptr;
    ptr = (struct node*)malloc( sizeof(struct node*));    
cout<<ptr;
    return 0;
}