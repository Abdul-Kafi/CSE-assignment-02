#include<iostream>
using namespace std;
int main()
{
    int k = 50;
    int &p=k;
    cout<<"k = "<<k<<endl;
    cout<<"reference of k is p and the value is = "<<p<<endl;
    return 0;

}