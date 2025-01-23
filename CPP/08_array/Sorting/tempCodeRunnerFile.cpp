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

