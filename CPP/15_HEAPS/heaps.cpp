//heaps is a complete binary tree(CBT) that comes witha heap property
// prop = max heap and min heap
//max heap= parent node is greater thn child nodes
//min heap= parent node is smaller thn child nodes
//prp of heap
//for 1-base  indexing if node is on ith node
//left chlid is on 2*1 node
//right child is on 2*i+1 node
//parent i/2

#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int data){
        size =size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
        void deleteElement(){

            if(size==0){
                return;
            }
            arr[1]==arr[size];
            size--;
            int i=1;
            while(i<size){
                int leftIdx=2*i;
                int rightIdx=2*i+1;
                
                if(leftIdx<size && arr[leftIdx]>arr[i]){
                    swap(arr[i],arr[leftIdx]);
                    i=leftIdx;
            }
            else if (rightIdx<size && arr[i]<arr[rightIdx]){
                swap(arr[i],arr[rightIdx]);
                i=rightIdx;


            }
            else{
                return;
            }
        }
    
    void print(){
        for(int i=1;i<size;i++){
            cout<<arr[i]<<" ";

    }
    cout<<endl;
    }
        }
    };
    int main(){
        Heap h;
        h.insert(20);
        h.insert(15);
        h.insert(18);
        h.insert(22);
        h.print();

    }
