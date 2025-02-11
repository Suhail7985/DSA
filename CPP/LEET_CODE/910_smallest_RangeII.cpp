// //Smallest range
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int smallestRangeII(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int diff=nums[n-1]-nums[0];
        for(int i=1; i<n; i++){
            int mn=min(nums[0]+k, nums[i]-k);
            int mx=max(nums[i-1]+k, nums[n-1]-k);
            diff=min(diff, mx-mn);
        }
        return diff;
    }

int main(){
    vector<int> nums={1};
    int k=3;
    cout<<smallestRangeII(nums,k)<<endl;
}
    

                
