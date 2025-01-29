#include <iostream>
#include <stack>
using namespace std;
class MyStack{
    public:
    int *arr;
    int top;
    int size;
    MyStack(){
        arr = new int[100];
        top = -1;
       

    }
    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    void peek(){
        if(top==-1){
            cout<<"No element to peek"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }
};
int main() {
    MyStack s;
    s.size=100;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    for(int i=0; i<4; i++){
        cout<<s.arr[s.top]<<endl;
        s.top--;

    }
    s.peek();
    s.pop();
    


}

    
