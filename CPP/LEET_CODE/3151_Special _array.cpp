// 

#include<iostream>
#include<vector>
using namespace std;

bool checkParity(vector<int> &arr){
    for(int i=0;i<arr.size()-1;++i){
        if(arr[i]%2==arr[i+1]){
            return true;
        }
        return false;
    }
}
int main(){
    vector<int> arr={4,1,3,6};
    cout<<checkParity(arr);
    return 0;

}
