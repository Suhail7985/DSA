#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    for(int i=0; i<4; i++){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}