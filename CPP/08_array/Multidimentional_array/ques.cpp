#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    // Declare a 2D array
    int arr[n][m]; // Note: This is a variable-length array, supported in some compilers

    // Input elements into the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; // Read each element
        }
    }

    // Print the array elements column by column
    cout << "Array elements printed column by column:" << endl;
    for (int j = 0; j < m; j++) { // Iterate over columns
        for (int i = 0; i < n; i++) { // Iterate over rows
            cout << arr[i][j] << " "; // Print the element
        }
        cout << endl; // New line after each column
    }

    return 0;
}
