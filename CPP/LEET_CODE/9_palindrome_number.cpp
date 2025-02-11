//palindrome number
#include<iostream>
using namespace std;
bool isPalindrome(int x) {
        int temp=x;
        long rev=0;
        while(x>0){
            rev=(rev*10)+(x%10);
            x/=10;
        }
        return(rev==temp);
        }
int main(){
    int n=121;
}
