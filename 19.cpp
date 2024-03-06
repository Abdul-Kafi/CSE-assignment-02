#include<iostream>;
using namespace std;
class student
{
public:
    int a;
    int x[6];
    int y[6];
    float gp;
    int total_credit;
    float gpa;
    float define_gp(int a)
{
    if(a<=100 && a>=80){
        return(4.00);
    }
    else if(a<=79 && a>=75)
    {
        return(3.75);
    }
    else if(a<=74 && a>=70)
    {
        return(3.5);
    }
    else if(a<=69 && a>=65)
    {
        return(3.25);
    }
    else if(a<=64 && a>=60)
    {
        return(3.00);
    }
    else if(a<=59 && a>=55)
    {
        return(2.75);
    }
    else if(a<=54 && a>=50)
    {
        return(2.50);
    }
    else if(a<=49 && a>=45)
    {
        return(2.25);
    }
    else if(a<=44 && a>=40)
    {
        return(2.00);
    }
    else{return(0.00);}
}
void gpa_calculation(void)
{
    int x[6];
    int y[6];//credits arrey
    float gp;
    int total_credit;
    float gpa;
    cout<<"Enter mark of EEE = ";
    cin>>x[1];
    cout<<"Enter credit of EEE = ";
    cin>>y[1];
    float gp1=(define_gp(x[1])*y[1]);
    cout<<"Enter mark of CSE = ";
    cin>>x[2];
    cout<<"Enter credit of CSE = ";
    cin>>y[2];
    float gp2=(define_gp(x[2]))*y[2];
    cout<<"Enter mark of PHYSICS = ";
    cin>>x[3];
    cout<<"Enter credit of PHYSICS = ";
    cin>>y[3];
    float gp3=(define_gp(x[3]))*y[3];
    cout<<"Enter mark of MATH = ";
    cin>>x[4];
    cout<<"Enter credit of MATH = ";
    cin>>y[4];
    float gp4=(define_gp(x[4]))*y[4];
    cout<<"Enter mark of ECONOMICS = ";
    cin>>x[5];
    cout<<"Enter credit of ECONOMICS = ";
    cin>>y[5];
    float gp5=(define_gp(x[5]))*y[5];
    cout<<"Enter mark of SOCIOLOGY = ";
    cin>>x[6];
    cout<<"Enter credit of SOCIOLOGY = ";
    cin>>y[6];
    float gp6=(define_gp(x[6]))*y[6];
    gp = gp1 + gp2 + gp3 + gp4 + gp5 + gp6;
    total_credit = y[1] + y[2] + y[3] + y[4] + y[5] + y[6];
    gpa = (gp/total_credit);
    cout<<"GPA of this student is = "<<gpa<<endl;
}
};
int main()
{
    student t;
    t.gpa_calculation();
    return 0;
}