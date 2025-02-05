//remove element
#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    cout << removeElement(nums, val);
    return 0;
}