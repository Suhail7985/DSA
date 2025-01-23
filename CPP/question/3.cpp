// 


// #include<iostream>
// #include <limits> 
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the number of elements in the array: ";

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
// }
// int max=std::numeric_limits<int>::min();
// int min=std::numeric_limits<int>::max();
// // int a;
// // int ar[a];
// for(int i=0;i<n;i++){
//     int con=sum-arr[i];
//     if(con>max){
//         max=con;
//     }
//     if(con<min){
//         min=con;
//         }

// }
// cout<<max<<" "<<min<<endl;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int max=-10000;
//     int min=10000;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the number of elements in the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         }
//         for(int value : arr){
//             if (value>max){
//                 max=value;
//             }
//             if(value<min){
//                 min=value;

//             }

//         }
//         cout<<max<<" "<<min;
    
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n]; 
    int totalSum = 0; 
    int minValue, maxValue;

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
        totalSum += arr[i]; 

        if (i == 0) {
            minValue = arr[i];
            maxValue = arr[i];
        } else {
            if (arr[i] < minValue) {
                minValue = arr[i];
            }
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
    }

    int minSum = totalSum - maxValue; 
    int maxSum = totalSum - minValue; 

    cout << minSum << " " << maxSum << endl;

    
}


