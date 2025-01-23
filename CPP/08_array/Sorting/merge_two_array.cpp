// //merge two sorted array
// #include<iostream>
// using namespace std;
// void merge(int arr1[],int arr[],int arr2[],int n,int m){
//     for(int i=0;i<n-1;i++){
//         int minIndex=arr[i];
    
//     for(int j=n-i;i<n;j++){
//         if(arr[j]<arr[minIndex]){
//             minIndex=j;

//     }
//     }
//     swap(arr[minIndex],arr[i]);
    
    
//     }
//     for(int i=0;i<m-1;i++){
//         int minIn=arr1[i];

    
//     for(int j=m-i;j<m;j++){
//         if(arr1[j]<arr1[minIn]){
//             minIn=j;
//     }
//     }
//     swap(arr1[minIn],arr1[i]);
// }
// }
// int main(){
//     int arr1[]={1,3,5,7,9};
//     int m=sizeof(arr1)/sizeof(arr1[0]);a
//     int arr[]={2,4,6,8,10};
//     int n=sizeof(arr)/sizeof(arr[0]); 

//     int arr2[n+m];
//     merge(arr1,arr,arr2,n,m);
//     for(int i=0;i<n+m-1;i++){
//         cout<<arr2[i]<<" ";
//         }

// }


#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int arr[], int n, int m) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    while (i < n) {
        arr[k++] = arr1[i++];
    }

    
    while (j < m) {
        arr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int arr[m + n]; 
    merge(arr1, arr2, arr, m, n);

    for (int i = 0; i < m + n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
}

