#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n, temp, sum = 0, d;

    cout << "Enter number: ";
    cin >> n;

    temp = n;
    while (temp > 0) {
        d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }

    if (sum == n)
        cout << "Number is strong";
    else
        cout << "Number is not strong";

    return 0;
}
