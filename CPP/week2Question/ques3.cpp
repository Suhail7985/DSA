
// Whenever George asks Lily to hang out, she's busy doing homework. George wants to help her finish it faster, 
// but he's in over his head! Can you help George understand Lily's homework so she can hang out with him?

// Consider an array of
// distinct integers, . George can swap any two elements of the array any number of times. An array is 
// beautiful if the sum of among

// is minimal.

// Given the array

// , determine and return the minimum number of swaps that should be performed in order to make the array beautiful.

// Example

// One minimal array is

// . To get there, George performed the following swaps:

//     Swap      Result
//           [7, 15, 12, 3]
//     3 7   [3, 15, 12, 7]
//     7 15  [3, 7, 12, 15]
   

// It took

// swaps to make the array beautiful. This is minimal among the choices of beautiful arrays possible.

// Function Description

// Complete the lilysHomework function in the editor below.

// lilysHomework has the following parameter(s):

//     int arr[n]: an integer array

// Returns

//     int: the minimum number of swaps required

// Input Format

// The first line contains a single integer,
// , the number of elements in . The second line contains space-separated integers,

// .

// Constraints

// Sample Input

// STDIN       Function
// -----       --------
// 4           arr[]size n = 4
// 2 5 3 1     arr = [2, 5, 3, 1]

// Sample Output

// 2

// Explanation

// Define
// to be the beautiful reordering of . The sum of the absolute values of differences between its adjacent elements is
//  minimal among all permutations and only two swaps ( with and then with ) were performed.










#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int countSwaps(int arr[], int n) {
    // Create a sorted copy of the array
    int sortedArr[n];
    for (int i = 0; i < n; i++) {
        sortedArr[i] = arr[i];
    }
    sort(sortedArr, sortedArr + n);

    // Create a mapping from value to its index in the sorted array
    unordered_map<int, int> indexMap;
    for (int i = 0; i < n; i++) {
        indexMap[sortedArr[i]] = i;
    }

    bool visited[n] = {false};
    int swaps = 0;

    for (int i = 0; i < n; i++) {
        // If already visited or already in the correct position
        if (visited[i] || arr[i] == sortedArr[i]) {
            continue;
        }

        // Find the size of the cycle
        int cycle_size = 0;
        int j = i;

        while (!visited[j]) {
            visited[j] = true;
            // Move to the next index using the index map
            j = indexMap[arr[j]];
            cycle_size++;
        }

        // If there is a cycle of size k, we need (k - 1) swaps
        if (cycle_size > 0) {
            swaps += (cycle_size - 1);
        }
    }

    return swaps;
}

int lilysHomework(int arr[], int n) {
    // Count swaps for ascending order
    int swapsAsc = countSwaps(arr, n);
    
    // Reverse the array for descending order
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }
    
    // Count swaps for descending order
    int swapsDesc = countSwaps(arr, n);
    
    // Return the minimum of the two
    return min(swapsAsc, swapsDesc);
}

int main() {
    int n;
    cin >> n; // Read the number of elements
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the array elements
    }
    
    cout << lilysHomework(arr, n) << endl; // Output the result
    return 0;
}
