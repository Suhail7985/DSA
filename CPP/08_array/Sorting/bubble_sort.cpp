#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
        }
}
    }
}
int main()
{
    int arr[6]={3,4,5,2,4,3};
    BubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";

    }
}
    