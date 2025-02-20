#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q; // n = number of arrays, q = number of queries

    vector<vector<int>> arrays(n); // 2D vector to store arrays

    // Reading arrays
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size; // Read the size of the current array
        arrays[i].resize(size); // Resize the vector to the given size
        for (int j = 0; j < size; j++) {
            cin >> arrays[i][j]; // Read the elements of the array
        }
    }

    // Processing queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y; // Read the query indices
        cout << arrays[x][y] << endl; // Output the required element
    }

    return 0;
}
