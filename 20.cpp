#include<iostream>
using namespace std;
class student
{
public:
    float cgpa;
    float total_gpa=0;
    int p;
    float x[8];
    void input(void)
    {
        cout<<"Enter the number of semister : ";
        cin>>p;
        for(int i=1;i<=p;i++)
        {
            cout<<"Enter the GPA of your semister "<<i<<" : ";
            cin>>x[i];
            total_gpa=total_gpa+x[i];
        }
    }
    void calculation(void)
    {
        cgpa = (total_gpa/p);
    }
    void display(void)
    {
        cout<<"The C.G.P.A of that student is :"<<cgpa;
    }
};
int main()
{
    student A;
    A.input();
    A.calculation();
    A.display();
    return 0;
}