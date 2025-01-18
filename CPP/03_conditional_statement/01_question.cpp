#include<iostream>
using namespace std;
int main()
{
     int a,b,c,d;
    //  cout<<"Enter the first number: ";
    //  cin>>a;
    //  cout<<"Enter the second number: ";
    //  cin>>b;
    //  cout<<"Enter the third number: ";
    //  cin>>c;
    // int lar=(a>b)?(a>c)?  a : c : (b>c)? b : c; 
    // cout << lar;

    cin>> a >> b >> c >> d;
    int l= (a > b) ? (a > c) ? (a > d) ? : a : c : d : (d>c) ? (d>b) ? d : ;
    cout << l ; 

}