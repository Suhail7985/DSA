//delete the middle element of stack
#include <iostream>
#include <stack>
using namespace std;
void deleteMid(stack<int> &s,int n,int curr){
    if(s.empty() || curr==n){
        return;
    }
    int x=s.top();
    s.pop();
    deleteMid(s,n,curr+1);
    if(curr!=n/2){
        s.push(x);
    }

}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    deleteMid(s,s.size(),0);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}



// #include <bits/stdc++.h> 
// void delfromstack(stack<int>&inputStack,int count,int size){
//    if(inputStack.empty() || count==size/2){
//       inputStack.pop();
//       return;

//    }
//    int temp=inputStack.top();
//    inputStack.pop();
//    delfromstack(inputStack,count+1,size);
//    inputStack.push(temp);
// }
// void deleteMiddle(stack<int>&inputStack, int N){
	
//    // Write your code here
//    int count=0;
//    delfromstack(inputStack,count,N);
   
// }