//remove duplicate from sorted array
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}


int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6};
    int newLength = removeDuplicates(nums);
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}