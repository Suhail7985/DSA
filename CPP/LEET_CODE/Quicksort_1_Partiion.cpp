//Quicksort 1 - Partition
// Sample Input

// STDIN       Function
// -----       --------
// 5           arr[] size n =5
// 4 5 3 7 2   arr =[4, 5, 3, 7, 2]

// Sample Output

// 3 2 4 5 7

// Steps to Solve the Problem:

//     Identify the Pivot: The first element of the array is chosen as the pivot.
//     Partition the Array: We will create three lists:
//         less: to hold elements less than the pivot.
//         equal: to hold the pivot itself.
//         greater: to hold elements greater than the pivot.
//     Iterate Through the Array: For each element in the array, compare it with the pivot and place it in the appropriate list.
//     Combine the Lists: Finally, concatenate the less, equal, and greater lists to form the final partitioned array.


#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> arr) {
    int pivot = arr[0]; // The first element is the pivot
    vector<int> less, equal, greater;

    // Partitioning the array
    for (int num : arr) {
        if (num < pivot) {
            less.push_back(num);
        } else if (num > pivot) {
            greater.push_back(num);
        } else {
            equal.push_back(num);
        }
    }

    // Combine the results
    less.insert(less.end(), equal.begin(), equal.end());
    less.insert(less.end(), greater.begin(), greater.end());

    return less; // Return the partitioned array
}

int main() {
    int n;
    cin >> n; // Read the size of the array
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the elements of the array
    }

    vector<int> result = quickSort(arr);
    
    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


