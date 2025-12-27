// C++ program to check if a number is a Happy number or
// not.
#include <bits/stdc++.h>
using namespace std;

// Method - returns true if the input is a happy number else
// returns false
bool isHappynumber(int n)
{

    int sum = n, x = n;
    // This loop executes till the sum of square of digits
    // obtained is not a single digit number
    while (sum > 9) {
        sum = 0;
        // This loop finds the sum of square of digits
        while (x > 0) {
            int d = x % 10;
            sum += d * d;
            x /= 10;
        }
        x = sum;
    }
    if (sum == 7 || sum == 1)
        return true;
    return false;
}

int main()
{
    int n = 13;

    if (isHappynumber(n))
        cout << n << " is a Happy number";
    else
        cout << n << " is not a Happy number";
    return 0;
}

// This code is contributed by Sania Kumari Gupta