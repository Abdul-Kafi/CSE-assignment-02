#include<iostream>
using namespace std;
float amount(int diposit,float rate = 1.05)
{
    return(diposit*rate);
}
int main()
{
    int x = 100000;
    cout<<"If you have "<<x<<" taka you get "<<amount(x)<<" taka in one year";
    return 0;
}