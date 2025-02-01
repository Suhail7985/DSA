//sort all the elements of the array in-place
#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums){
    int n=nums.size();
    int j=1;
    for(int i=0;i<n;i++){
        if(nums[i]>=nums[j]){
            swap(nums[i],nums[j]);

            j++;

        }

    }

}
int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;

}