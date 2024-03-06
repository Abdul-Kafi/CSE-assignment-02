#include<iostream>
using namespace std;
class me{
    public :
    int a;
    int b;
    void swapvalue(int &a,int &b)
    {
        int t = a;
        a = b;
        b = t;

    }
}; 
int main()
{
    me y;
    int p = 8;
    int q = 9;
    y.swapvalue(p,q);
    cout<<"The value of p = "<<p<<"\nThe value of q = "<<q<<endl;
    return 0;
}