#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    int opr;
    cout<<"Enter both numbers : "<<endl;
    cin>>n1>>n2;
    cout<<"Enter operator : "<<endl;
    cin>>opr;

    switch (opr)
    {
    case '+':
        cout<<"Addition of "<<n1<<" and "<<n2<<" is "<<n1+n2<<endl;
        break;
    
    case '-':
        cout<<"Subtraction of "<<n1<<" and "<<n2<<" is "<<n1-n2<<endl;
        break;


    case '*':
        cout<<"Multiplication of "<<n1<<" and "<<n2<<" is "<<n1*n2<<endl;
        break;

    case '/':
        cout<<"Division of "<<n1<<" and "<<n2<<" is "<<n1/n2<<endl;
        break;
    
    default:
        cout <<"Error";
        break;
    }
    return 0;
    
}