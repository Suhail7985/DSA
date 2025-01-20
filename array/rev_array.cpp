//linear search
//reversing an array

#include<iostream>
using namespace std;
void revArray(int arr[],int size){
    int start=0;
    int end=size-1;

    while (start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

    }
    start++;
    end--;
    
}
int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array) / sizeof(array[0]);
    cout<<"Original array: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        }
        cout<<endl;
        revArray(array,size);
        cout<<"Reversed array: ";
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
            }
            cout<< endl;
            

}