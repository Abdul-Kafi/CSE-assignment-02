#include<iostream>
using namespace std;
class sumation
{
public:
    int a;
    int b;
    int c;
    int sum = 0;
    void input(void)
    {
        cout<<"Enter the 1 st number of the series = ";
        cin>>a;
        cout<<"Enter the last number of the series = ";
        cin>>b;
        cout<<"Enter the increment of the series = ";
        cin>>c;
    }
    void calculation(void)
    {
        for(int i = a;i<=b;i=i+c)
        {
          sum = sum +i;
        }
    }
    void output(void)
    {
        cout<<"Sum of the given series is = "<<sum<<endl;
    }
};
int main()
{
    sumation p;
    p.input();
    p.calculation();
    p.output();
    return 0;

}