//reverse first k element 
//example input= 10 6 2 5 3
//k=2
//ouput= 6 10 2 5 3
#include <iostream>
#include <queue>
#include <stack>    

using namespace std;

// reverse k element and put it to front

void reverseK(queue<int> &q,int k){
    stack<int> s;
    queue<int> q1;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q1.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        q1.push(q.front());
        q.pop();
    }
    q=q1;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}




// //reverse k element and put it to last


// void reverseK(queue<int> &q,int k){
//     stack<int>s;
//     for(int i=0;i<k;i++){
//         s.push(q.front());
//         q.pop();

//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();

//     }
//     while(q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();

//     }
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
 
// }



int main(){
    queue<int> q;
    q.push(10);
    q.push(6);
    q.push(2);
    q.push(5);
    q.push(3);
    int k=3;
    reverseK(q,k);
    
}