#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if (size==0 || size==1) return false;
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,size-1);
    }
}
int main()
{
    // int size;

    // // User input for the size of the array
    // cout << "Enter the number of elements in the array: ";
    // cin >> size;

    // // Create an array of the specified size
    // int* arr = new int[size];

    // // User input for the elements of the array
    // cout << "Enter the elements of the array: ";
    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // // Check if the array is sorted
    // if (isSorted(arr, size)) {
    //     cout << "The array is sorted." << endl;
    // } else {
    //     cout << "The array is not sorted." << endl;
    // }

    
        
            
}