#include<iostream>
#include<math.h>
using namespace std;
class S{
public:
    int x;
    void input(void)
    {
       cout<<"Enter the value = ";
       cin>>x;
    }
    void display(void)
    {
        cout<<"log(x) = "<<log(x);
    }
    };
int main()
{
    S u;
    u.input();
    u.display();
    return 0;
}