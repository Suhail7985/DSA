

//sum of 2d array

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    
    cout<<"Enter the number of erows: ";
    cin>>n;
    cout<<"Enter the number of coloumn: ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
int sum=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
sum+=arr[i][j];
            
}

}
cout<<"Sum of array is: "<<sum<<endl;
return 0;
}
