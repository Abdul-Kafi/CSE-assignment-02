#include<iostream>
using namespace std;
int main(){
    int *x=new int(9);
    float*y=new float(9.34);
    cout<<"The value stored in x = "<<*x<<endl;
    cout<<"The value stored in y = "<<*y<<endl;
    delete x;
    cout<<"Now the value stored in x = "<<*x<<endl;
    cout<<"Now the value stored in y = "<<*y<<endl;

    return 0;
}