#include<iostream>
using namespace std;
int sum(int a,int b){
    return(a+b);
}
int sum(int p,int q,int r){
    return(p+q+r);
}
int main()
{
    cout<<"1st function will use here."<<"\n"<<"sum = "<<sum(4,5)<<"\n"<<endl;
    cout<<"2nd function will use here."<<"\n"<<"sum = "<<sum(10,7,8)<<"\n"<<endl;

    return 0;
}