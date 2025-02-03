//sort all the elements of the array in-place
#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums){ 
//     int low=0;
//     int high=nums.size()-1;
//     int mid=0;
//     while(mid<=high){
//         switch(nums[mid]){
//             case 0:
//                 swap(nums[low++],nums[mid++]);
//                 break;
//             case 1:
//                 mid++;
//                 break;
//             case 2:
//                 swap(nums[mid],nums[high--]);
//                 break;
//         }
//     }
// }
for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        if(nums[i]>nums[j]){
            swap(nums[i],nums[j]);
        }
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