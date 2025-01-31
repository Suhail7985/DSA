//Interleave the First Half of the Queue with Second Half and return the modified queue in arraylist
#include<iostream>
#include<queue>
using namespace std;
 
// void interLeave(queue<int> &s,int size){
//     int n=size/2;
//     queue<int> q;
//     for(int i=0;i<n;i++){
//         q.push(s.front());
//         s.pop();

//     }
//     while (!q.empty()){
//         s.push(q.front());
//         q.pop();
//         s.push(s.front());
//         s.pop();

//     }
//     vector<int> v;
//     while(!s.empty()){
//         v.push_back(s.front());
//         s.pop();

//     }
   
// }




// int main(){
//     queue<int> q;
//     q.push(11);
//     q.push(12);
//     q.push(13);
//     q.push(14);
//     q.push(15);
//     q.push(16);
//     q.push(17);
//     q.push(18);
//     q.push(19);
//     q.push(20);
//     interLeave(q,q.size());
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();

//     }
//     return 0;

// }

vector<int> interLeave(queue<int> &q){
    int n=q.size();
    int half=n/2;
    queue<int> q1;
    queue<int> q2;
    for(int i=0;i<half;i++){
        q1.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }
    vector<int> v;
    while(!q1.empty() && !q2.empty()){
        v.push_back(q1.front());
        q1.pop();
        v.push_back(q2.front());
        q2.pop();
    }
    // while(!q1.empty()){
    //     v.push_back(q1.front());
    //     q1.pop();
    // }
    // while(!q2.empty()){
    //     v.push_back(q2.front());
    //     q2.pop();
    // }
    return v;
}
int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    vector<int> v=interLeave(q);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}