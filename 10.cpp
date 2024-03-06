#include<iostream>
using namespace std;
inline float A(float a,float b)
{
    return(a*b);
}
inline double B(double a,double b)
{
    return(a/b);
}
int main()
{
    float a = 45.23;
    float b = 3.45;
    cout<<A(a,b)<<"\n";
    cout<<B(a,b)<<"\n";
    return 0;
}