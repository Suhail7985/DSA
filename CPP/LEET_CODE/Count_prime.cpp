//Count Prime
#include<iostream>
#include<cmath>
using namespace std;
int countPrime(int n){
    int count = 0;
    if(n<=1){
        return 0;
    }
    for(int i = 2; i <= n; i++){
        if(i%2==0){
            count++;
        }
        }
        return count;

}
int main(){
    int n=10;
    countPrime(10);
    cout<<"Enter a number: ";
}