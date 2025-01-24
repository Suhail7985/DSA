#include<iostream>
using namespace std;
int sumofarray(int arr[],int size){
if(size==0) return 0;
return arr[0] + sumofarray(arr+1,size-1);
}
int main()
{
    int arr[]={3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of array elements is "<<sumofarray(arr,size);
    
}