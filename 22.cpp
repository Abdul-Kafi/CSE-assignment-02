#include<iostream>
using namespace std;
class factorial{
    public:
    int a,fact =1;
    void calculation(void)
    {
        
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=1;i<=a;i++){
        fact=fact*i;

    }
    cout<<"factorial of "<<a<<"is "<<fact<<endl;
    

    }
};
int main()
{
    factorial x;
   // x.input();
    x.calculation();
    //x.output();
    return 0;
}