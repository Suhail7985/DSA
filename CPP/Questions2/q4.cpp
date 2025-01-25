//  Problem statement

// Given a sequence of numbers ‘ARR’. Your task is to return a sorted sequence of ‘ARR’ in non-descending order with help of the merge sort algorithm.

// Example :

// Merge Sort Algorithm -

// Merge sort is a Divide and Conquer based Algorithm. It divides the input array into two-parts, until the size of the input array is not ‘1’. In the return part, it will merge two sorted arrays a return a whole merged sorted array.

// The above illustrates shows how merge sort works.

// Note :

// It is compulsory to use the ‘Merge Sort’ algorithm.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1 <= T <= 50
// 1 <= N <= 10^4
// -10^9 <= arr[i] <= 10^9

// Time Limit : 1 sec

// Sample Input 1 :

// 2
// 7
// 3 4 1 6 2 5 7
// 4
// 4 3 1 2

// Sample Output 1 :

// 1 2 3 4 5 6 7
// 1 2 3 4

// Explanation For Sample Input 1:

// Test Case 1 :

// Given ‘ARR’ : { 3, 4, 1, 6, 2, 5, 7 }

// Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4, 5, 6, 7 }. Non-descending order means every element must be greater than or equal to the previse element.

// Test Case 2 :

// Given ‘ARR’ : { 4, 3, 1, 2 }

// Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4 }. 

// Sample Input 2 :

// 2
// 4
// 5 4 6 7
// 3
// 2 1 1

// Sample Output 2 :

// 4 5 6 7
// 1 1 2



#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid;    // Size of right subarray

    // Create temporary arrays
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Avoid overflow

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int T;
    std::cin >> T; // Read number of test cases

    while (T--) {
        int N;
        std::cin >> N; // Read the size of the array
        std::vector<int> arr(N);

        // Read the array elements
        for (int i = 0; i < N; i++) {
            std::cin >> arr[i];
        }

        // Perform merge sort
        mergeSort(arr, 0, N - 1);

        // Print the sorted array
        for (int i = 0; i < N; i++) {
            std::cout << arr[i] << (i < N - 1 ? " " : "");
        }
        std::cout << std::endl; // New line after each test case
    }

    return 0;
}
