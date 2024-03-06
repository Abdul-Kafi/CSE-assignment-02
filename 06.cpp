#include<iostream>
using namespace std;
int main(){
    const int p = 10;
    //int p = 15;//just to show the value will not change.//
    cout<<"p = "<<p<<endl;
    for(int i=1;i<=p;i++){//without static value//
        int x =0;
        cout<<x<<endl;
        x++;
    }
    for(int i=1;i<=p;i++){//with static value//
        static int y =0;
        cout<<y<<endl;
        y++;
    }
    return 0;
}