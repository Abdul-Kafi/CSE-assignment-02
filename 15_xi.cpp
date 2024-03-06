#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
    int c;

    void sum(int a,int b)
    {
        cout<<"The sum of the numbers are = "<<a+b<<endl;
    }
    void sum(int a,int b,int c)
    {
        cout<<"The sum of the numbers are = "<<a+b<<endl;
    }
};
int main()
{
    A i;
    i.sum(4,5);
    i.sum(6,7,8);
    return 0;
}