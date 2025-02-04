//maximum ascending subarray sum
#include <iostream>
#include <vector>
using namespace std;

int maxAscendingSum(vector<int> &nums)
{
    int n = nums.size();
    int sum = nums[0];
    int max_sum = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            sum += nums[i];
        }
        else if(nums[i] <= nums[i-1] )
        {
            sum=nums[i];
        }
        if (sum > max_sum)
        {
            max_sum = sum;
        }


     }
    return max_sum;
    
}

int main()
{
    vector<int> nums = {10, 20, 30,40,50};
    cout << maxAscendingSum(nums);
    return 0;
}
