//step1- sort pivot element to the correct possition
//step2-make sure that the LHS of pivot element are smaller than pivot and greater than right side
//let first element is pivot in this 
#include<iostream>
// using namespace std;

// int partition(int arr[],int s,int e){
//     int count=0;
//     int pivot=arr[s];
//     for(int i=0;i<e;i++){
//         if(arr[i]<=pivot){
//             count++;

//         }
//     }
//     int pivotInd=s+count;
//     int i=s,j=e;

//     while (i<pivotInd && j>pivotInd) {
//        while (arr[i]<pivot)i++;
//        while (arr[j]>pivot)j--;
//        swap(arr[i++],arr[j--]);
//     }
//     return pivotInd;
// }

//     void quickSOrt(int arr[],int s,int e){
//         if(s>=e)return;
//         int p=partition(arr,s,e);
//         quickSOrt(arr,s,p-1);
//         quickSOrt(arr,p+1,e);
//     }  
    
// int main()
// {
//     int arr[5]={2,3,1,5,1};
//     int n = sizeof(arr) / sizeof(arr[0]); 

//     quickSOrt(arr, 0, n - 1); 

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
    
// }


#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int count = 0;
    int pivot = arr[s];
    
    // Count elements less than or equal to pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }
    
    // Place pivot at its correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]); // Move pivot to the correct position

    // Initialize pointers for partitioning
    int i = s, j = e;

    // Partition the array
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    
    return pivotIndex; // Return the index of the pivot
}

void quickSort(int arr[], int s, int e) {
    if (s >= e) return; // Base case
    int p = partition(arr, s, e); // Partition the array
    quickSort(arr, s, p - 1); // Sort the left part
    quickSort(arr, p + 1, e); // Sort the right part
}

int main() {
    int arr[] = {2, 3, 1, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    quickSort(arr, 0, n - 1); // Call quickSort on the entire array

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
