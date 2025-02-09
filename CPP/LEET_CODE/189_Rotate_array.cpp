#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k is greater than n
    if (k == 0) return; // No need to rotate if k is 0

    // Step 1: Reverse the entire array
    int s = 0;
    int e = n - 1;
    while (s < e) {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }

    // Step 2: Reverse the first k elements
    s = 0;
    e = k - 1;
    while (s < e) {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }

    // Step 3: Reverse the remaining n-k elements
    s = k;
    e = n - 1;
    while (s < e) {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
