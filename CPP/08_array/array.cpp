// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter no of element "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//     cout << arr[i] <<" ";
//     }
// }

#include<iostream>
#include<climits>
using namespace std;
int getminElement(int arr[], int size){
int min = INT_MAX;
for(int i = 0; i < size; i++){
if(arr[i] < min){
min = arr[i];
}
}
return min;
}
int main(){
    int arr[6]={3,5,2,7,8,1};
    int size=6;

    cout<<getminElement(arr,size);
}
