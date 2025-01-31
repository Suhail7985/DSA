//reverse the stack without using extra space (using recursion)
#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &s){
    if(s.empty()){
        return;

    }
    else{
        int top=s.top();
        s.pop();
        reverse(s);
        s.push(top);
    }

}

int main() {
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

}