#include<iostream>
using namespace std;
int main(){
    int n , temp , sum=0, d;
    cout<<"Enter number";
    cin>>n; 
    temp = n;
    while(temp){
        d = temp%10;
        sum += d*d*d;
        temp/=10;
    }
    if (sum==n){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong";
    }
}