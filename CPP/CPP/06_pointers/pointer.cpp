#include<iostream>
using namespace std;
int main()
{
    int a1=5;
    cout<<&a1<<endl;
    int *ptr=&a1;
    
    cout<<ptr<<endl;
    cout<<*ptr;

}