//count no of bad pairs in array
//solve with hash map not with brute force
#include<iostream>
#include<vector>
using namespace std;
long long countBadPairs(vector<int>& nums){
    long long ans = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(i<j && (j-i)!=nums[j]-nums[i]){
                ans++;
                }
                }
                }
                return ans;

}
int main(){
    vector<int> nums = {4, 1, 3, 3};
    cout << countBadPairs(nums) << endl;

}
