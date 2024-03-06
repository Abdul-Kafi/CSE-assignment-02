#include<iostream>
using namespace std;
class S{
public:
    int a;
    int b;
    int sum(int a,int b)
    {
        return (a+b);
    }
    };
int main()
{
    S u;
    int x = 9;
    int y = 10;
    cout<<"sum = "<<u.sum(x,y)<<endl;
}