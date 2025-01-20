#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=10;
    // cout << a++ + ++a <<endl;

    // arthemetic operator
    // a+b;
    // a-b;
    // a*b; 

    //--------------------------
    //asingment operator +=,-=,/=,*=,%=

    // a += b;
    
    // cout << a <<endl;
    // cout << b <<endl;

    //-------------------
    // relational operator

    // bool c=a==b;
    // bool d=a<b;
    // cout << c <<endl;
    // cout << d <<endl;


    //------------------------
    // logical operator &&, ||, !
    bool f=(a>b)||(a<b);
    cout << f <<endl;
    bool e=(a>b)&&(a<b);
    cout << e <<endl;
    
    
}