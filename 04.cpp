#include<iostream>
using namespace std;
int main(){
    int *x,p;
    p=7;
    x=&p;
    cout<<"the value pointed by x : "<<*x<<endl;
    cout<<"Address stored at x : "<<x<<endl;
    cout<<"Address of x : "<<&x<<endl;
    return 0;
}