#include <iostream>

using namespace std;

long long coloredCells(int n) {
    return (long long)n * n + (long long)(n - 1) * (n - 1);
}

int main() {
    cout << coloredCells(1) << endl; // Output: 1
    cout << coloredCells(2) << endl; // Output: 5
    cout << coloredCells(3) << endl; // Output: 13
    cout << coloredCells(4) << endl; // Output: 25
    return 0;
}
