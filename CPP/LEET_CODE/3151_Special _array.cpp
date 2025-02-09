#include <iostream>
#include <vector>
using namespace std;

bool checkParity(vector<int> &arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        // Check if both numbers have the same parity
        if ((arr[i] % 2) == (arr[i + 1] % 2)) {
            return true; // Found a pair with the same parity
        }
    }
    return false; // No pairs with the same parity found
}

int main() {
    vector<int> arr = {4, 1, 3, 6};
    if (checkParity(arr)) {
        cout << "There are consecutive elements with the same parity." << endl;
    } else {
        cout << "No consecutive elements with the same parity." << endl;
    }
    return 0;
}
