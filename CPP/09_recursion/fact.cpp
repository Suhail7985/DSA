#include<iostream>
using namespace std;
int fact(int n){
    
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0) return 1;
    else return n*fact(n-1);
    
}
int main()
{
    int n;

}