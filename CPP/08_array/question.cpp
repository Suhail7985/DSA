// You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

// Example 1:
// Input:
// 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output:
// 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation:
// All the zeros are moved to the end and non-negative integers are moved to front by maintaining order


// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         }
//         int j=0;
//         for(int i=0;i<n;i++){
//             if(arr[i]!=0){
//                 int temp=arr[i];
//                 arr[i]=arr[j];  
//                 arr[j]=temp;    
//                 j++;
//                 }
//                 }
//                 for(int i=0;i<n;i++){
//                     cout<<arr[i]<<" ";
//                     }
//                     return 0;
//                     }









//0 before the numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
              }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}
                    

 