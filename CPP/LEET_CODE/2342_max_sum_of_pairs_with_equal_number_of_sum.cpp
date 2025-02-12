#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to calculate the sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int maxSum(vector<int>& nums) {
    unordered_map<int, vector<int>> digitSumMap;

    // Populate the map with digit sums
    for (int num : nums) {
        int dSum = digitSum(num);
        digitSumMap[dSum].push_back(num);
    }

    int maxPairSum = -1;

    // Find the maximum sum of pairs with the same digit sum
    for (auto& entry : digitSumMap) {
        vector<int>& numList = entry.second; // Get the vector of numbers for this digit sum
        if (numList.size() > 1) {
            // Sort the list to get the two largest numbers
            sort(numList.begin(), numList.end(), greater<int>());
            // Calculate the sum of the two largest numbers
            int currentPairSum = numList[0] + numList[1];
            maxPairSum = max(maxPairSum, currentPairSum);
        }
    }

    return maxPairSum;
}

int main() {
    vector<int> nums1 = {18, 43, 36, 13, 7};
    cout << "Maximum sum of a pair with equal sum of digits: " << maxSum(nums1) << endl; // Output: 54

    vector<int> nums2 = {10, 12, 19, 14};
    cout << "Maximum sum of a pair with equal sum of digits: "
}