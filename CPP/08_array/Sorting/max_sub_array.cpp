#include<iostream>
#include<climits>
using namespace std;
//kadane's algo
void max(int arr[],int n){
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max)
        max=sum;
        }
        if(sum<0){
            sum=0;
        }
        cout<<max;
        }
        int main(){
            int arr[]={1,3,2,-1};
            int n=sizeof(arr)/sizeof(arr[0]);
            max(arr,n);
            

}
