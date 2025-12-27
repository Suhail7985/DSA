// C++ program to check whether a number is Disarium
// or not
#include <iostream>
#include <cmath>
using namespace std;

// Finds count of digits in n
int countDigits(int n) {
    int count = 0;

    // Count number of digits in n
    int x = n;
    while (x) {
        x = x / 10;

        // Count the no. of digits
        count++;
    }
    return count;
}

// Function to check whether a number is disarium or not
bool isDisarium(int n) {
  
    // Count digits in n.
    int count = countDigits(n);

    // Compute sum of terms like digit multiplied by
    // power of position
  
   // Initialize sum of terms
    int sum = 0; 
    int x = n;
    while (x) {
      
        // Get the rightmost digit
        int r = x % 10;

        // Sum the digits by powering according to
        // the positions
        sum = sum + pow(r, count--);
        x = x / 10;
    }

    // If sum is same as number, then number is
    return (sum == n);
}

int main() {
    int n = 135;
    if (isDisarium(n))
        cout << "True";
    else
        cout << "False";
    return 0;
}