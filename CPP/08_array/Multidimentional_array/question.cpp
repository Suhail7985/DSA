#include<iostream>
#include <climits>
using namespace std;
int sumofArr(int arr[][4],int row,int col){
    int max=INT_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
    }
    if(sum>max){
        max=sum;
        rowindex=row;

    }


}
cout<<"Maximum sum is: "<<max<<endl;
return rowindex;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,1,2,3,4};
    int rowindex=sumofArr(arr,3,4);
    

}