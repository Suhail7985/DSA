//Insertion Sort - Part 1
// Sample Input

// 5
// 2 4 6 8 3

// Sample Output

// 2 4 6 8 8 
// 2 4 6 6 8 
// 2 4 4 6 8 
// 2 3 4 6 8 

#include <iostream>
#include <vector>
using namespace std;

void insertionSort1(int n, vector<int>& arr) {
    // Store the last element
    int value_to_insert = arr[n - 1];
    // Start from the second last index
    int i = n - 2;

    // Shift elements to the right until we find the correct position
    while (i >= 0 && arr[i] > value_to_insert) {
        arr[i + 1] = arr[i];  // Shift element to the right
        // Print the current state of the array
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
        i--;
    }

    // Insert the value at the correct position
    arr[i + 1] = value_to_insert;
    // Print the final state of the array
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Read the size of the array
    vector<int> arr(n);
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the insertion sort function
    insertionSort1(n, arr);

    return 0;
}
