//strong password
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minimumNumber(int n, string password) {
    vector<bool> is(4, false); // is[0]: uppercase, is[1]: lowercase, is[2]: digit, is[3]: special
    string special_characters = "!@#$%^&*()-+";

    // Check the types of characters in the password
    for (int i = 0; i < n; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            is[0] = true; // Uppercase
        } else if (password[i] >= 'a' && password[i] <= 'z') {
            is[1] = true; // Lowercase
        } else if (password[i] >= '0' && password[i] <= '9') {
            is[2] = true; // Digit
        } else if (special_characters.find(password[i]) != string::npos) {
            is[3] = true; // Special character
        }
    }

    // Count how many character types are missing
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (!is[i]) {
            count++;
        }
    }

    // Ensure the password length is at least 6
    if (n + count < 6) {
        count += 6 - (n + count);
    }

    return count;
}

int main() {
    int n;
    string password;

    cin >> n; // Read the length of the password
    cin >> password; // Read the password string

    int result = minimumNumber(n, password);
    cout << result << endl;

    return 0;
}
