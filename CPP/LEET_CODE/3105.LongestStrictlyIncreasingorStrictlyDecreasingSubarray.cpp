//Longest Strictly Increasing or Strictly Decreasing Subarray
#include<iostream>
#include<vector>
using namespace std;
int longestSubarray(vector<int> &nums){
    int n=nums.size();
    int decount=1;
    int inccount=1;
    int max_count=1;
    for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1]){
            inccount++;
        }
        else{
            inccount=1;
        }
        if(nums[i]<nums[i-1]){
            decount++;
        }
        else{
            decount=1;
        }
        if(inccount>max_count){
            max_count=inccount;
        }
        if(decount>max_count){
            max_count=decount;
        }
    }
    return max_count;
}
   
int main(){
    vector<int> nums={1,4,3,3,2};
    cout<<longestSubarray(nums);
    return 0;
}