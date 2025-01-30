#include <iostream>
using namespace std;
    class Queue{
        public:
        int *arr;

        int front;
        int rear;
        int size;

        Queue(int s){
            size=s;
            arr=new int[s];
            front=-1;
            rear=-1;
        }
        void push(int x){
            if(rear==size-1){
                cout<<"Queue if full"<<endl;
                return;
            }
            rear++;
            arr[rear]=x;
            if(front==-1){
                front++;

            }


        }
        void Pop(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            front++;
            if(front>rear){
                front=rear=-1;

            }


        }

    };
int main() {
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.Pop();
    q.Pop();
    return 0;
}