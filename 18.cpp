#include<iostream>
using namespace std;
class CSE
{
public:
    long int a;
    double b;
    string x;
    string y;
    string z;
    void putdata(void);
    void display(void)
    {
        cout<<"Name : "<<x<<"\n";
        cout<<"Department : "<<y<<"\n";
        cout<<"Roll Number : "<<a<<"\n";
        cout<<"Course Name : "<<z<<"\n";
        cout<<"Course G.P.A. : "<<b<<"\n";
    }

};
void CSE :: putdata(void)
    {
        cout<<"Enter Name : ";
        cin>>x;
        cout<<"\nEnter Department : ";
        cin>>y;
        cout<<"\nEnter Roll Number : ";
        cin>>a;
        cout<<"\nEnter Course Name : ";
        cin>>z;
        cout<<"\nEnter G.P.A of that Course : ";
        cin>>b;
    }
int main()
{
    CSE p;
    p.putdata();
    CSE q;
    q.putdata();
    cout<<"Student Data"<<"\n";
    p.display();
    cout<<"Student Data"<<"\n";
    q.display();
    return 0;
}