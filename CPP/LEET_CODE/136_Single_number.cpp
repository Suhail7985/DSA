//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int> &nums){
    int n=nums.size();
    int result=0;
    for(int i=0;i<n;i++){
        result^=nums[i];
    }
    return result;

}
int main(){
    vector<int> nums={4,1,2,1,2};
    cout<<singleNumber(nums);
    return 0;
}
