//reverse queue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverse(queue<int> &q){
   queue<int> q1;
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q1.push(s.top());
        s.pop();
    }
    q=q1;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverse(q);
    
}




