//two sum input array sorted
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int left = 0;
    int right = n - 1;
   for(int i=0;i<n;++i){
       if(numbers[left]+numbers[right]==target){
           return {left+1,right+1};
       }
       else if(numbers[left]+numbers[right]<target){
           left++;
       }
       else{
           right--;
       }
   }
}
int main()
{
    vector<int> numbers = {2, 8, 1, 15};
    int target = 9;
    vector<int> res = twoSum(numbers, target);
    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i] << " ";
    }
    return 0;
}