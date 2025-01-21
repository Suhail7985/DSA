//Question 2

// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
// [1,2,4,7,7,5]
// Output:
// Second Smallest : 2
// Second Largest : 5
// Explanation:
// The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j,k;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]){
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                    }

            }
            if(i==0)
            {
                cout<<"Second Smallest : "<<a[i]<<endl;
                }
                else if(i==n-2)
                {
                    cout<<"Second Largest : "<<a[i]<<endl;
                    }
                  
                        else
                        {
                            
                            }

        }                       
}