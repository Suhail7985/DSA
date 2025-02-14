//minimum-operations-to-exceed-threshold-value-ii
#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int minOperations(std::vector<int>& nums, int k) {
        // Sort the array to easily access the two smallest elements
        std::sort(nums.begin(), nums.end());
        int count = 0;

        // Continue until all elements are >= k
        while (nums.size() >= 2 && nums[0] < k) {
            // Get the two smallest elements
            int x = nums[0];
            int y = nums[1];

            // Remove the two smallest elements
            nums.erase(nums.begin(), nums.begin() + 2);

            // Calculate the new element to add
            int newElement = std::min(x, y) * 2 + std::max(x, y);
            // Insert the new element back into the sorted position
            nums.insert(std::upper_bound(nums.begin(), nums.end(), newElement), newElement);
            count++;
        }

        // Check if all elements are >= k
        for (int num : nums) {
            if (num < k) {
                return -1; // or some indication that it's not possible
            }
        }

        return count;
    }
};

// Example usage
int main() {
    Solution solution;
    std::vector<int> nums1 = {2, 11, 10, 1, 3};
    int k1 = 10;
    std::cout << "Output for nums1: " << solution.minOperations(nums1, k1) << std::endl; 

    return 0;
}
