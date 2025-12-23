#include<iostream>
using namespace std;
int main(){
    int n , temp , sum=0, d;
    cout<<"Enter number: ";
    cin>>n;
    temp = n;
    while(temp > 0){
        d = temp % 10;
        sum = sum * 10 + d;
        temp /= 10;
    }
    if(sum == n){
        cout << "number is palindrome";
    } else {
        cout <<"number is not palindrome"
    }
    return 0;
}
