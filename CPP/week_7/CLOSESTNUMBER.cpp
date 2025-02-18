//Closest Numbers
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> closestNumbers(vector<int>& arr) {
    // Step 1: Sort the array
    sort(arr.begin(), arr.end());
    
    // Step 2: Initialize variables to find the minimum difference
    int min_diff = INT_MAX;
    vector<int> result;

    // Step 3: Find the minimum difference
    for (int i = 1; i < arr.size(); i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            result.clear(); // Clear previous results
            result.push_back(arr[i - 1]);
            result.push_back(arr[i]);
        } else if (diff == min_diff) {
            result.push_back(arr[i - 1]);
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n; // Read the size of the array
    vector<int> arr(n);
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the closestNumbers function
    vector<int> result = closestNumbers(arr);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

