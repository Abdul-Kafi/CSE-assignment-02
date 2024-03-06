#include<iostream>
using namespace std;
class calculation{
    private :
    float a,b;
    char x;
    public :
    void menu(void);
};
void calculation :: menu(){
    cout<<"*******MENU*******";
    cout<<"\nAddition = '+'";
    cout<<"\nSubtraction = '-'";
    cout<<"\nMultiplication = '*'";
    cout<<"\nDivition = '/'";
    cout<<"\nMake your chiose = ";
    cin>>x;
    cout<<"Enter two number = ";
    cin>>a>>b;
    switch(x){
        case '+':
        cout<<a + b;
        break;
        case '-':
        cout<<a - b;
        break;
        case '*':
        cout<<a * b;
        break;
        case '/':
        cout<<a / b;
        break;
        default :
        cout<<"Error ! Operator is not correct";


    }
}
int main()
{
    calculation p;
    p.menu();

return 0;


}