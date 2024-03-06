#include<iostream>
using namespace std;
class S{
public:
    void swapp(int *a,int *b){
int t = *a;
*a = *b;
*b = t;
}
    };
int main()
{
    S u;
    int x = 9;
    int y = 10;
    u.swapp(&x,&y);
    cout<<"The value of x = "<<x<<"\nThe value of y = "<<y<<endl;
    return 0;
}