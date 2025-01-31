#include <bits/stdc++.h> 
using namespace std;
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int> st;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        st.push(ele);
    }
    while(!st.empty()){
        int ele=st.top();
        st.pop();
        q.push(ele);
    }
    return q;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverseQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
