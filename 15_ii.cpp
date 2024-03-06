#include<iostream>
using namespace std;
class a
{
public:
     int k = 100;
     void display(void);
};
void a :: display()
{
        cout<<"The value of k in inner block = "<<k<<endl;
}


int main()
{
    a y;
    y.display();
    return 0;
}