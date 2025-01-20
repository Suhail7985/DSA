#include<iostream>
using namespace std;
bool bSearch(int arr[],int size, int key){
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return true;
            }
            else if (arr[mid] < key) {
                low = mid + 1;
                }
                else {
                    high = mid - 1;


        }
        mid=(low+high)/2;
    }
    return false;
    }

int main()
{
    int arr[] = {1, 2, 3, 4, 5,6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    if (bSearch(arr, size, key))
    cout << "Element is present in array";
    else
    cout << "Element is not present in array";
    return 0;

}