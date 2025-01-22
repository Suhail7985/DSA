

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n;
//     cin>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//             cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//             }
//             return 0;



// }
//make 2d array and take user input key and tell is this key is available in that 2d array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     cout<<"Enter the number of columns: ";
//     cin>>m;
//     int arr[n][m];
//     int key;
//     cout<<"Enter the key: ";
//     cin>>key;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//             if(arr[i][j]==key)
//             {
//                 cout<<"Key is available at position ("<<i<<","<<j<<")"<<endl;
//                 }
//                 }
//                 }
// }

//sum of array
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
            cin>>arr[n][m];
        }
    }
            int sum=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    sum+arr[i][j];
            
                    }

    }
    cout<<"Sum of array is: "<<sum<<endl;
        }
 
