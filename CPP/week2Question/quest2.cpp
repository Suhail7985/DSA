// Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

//     Its length is at least 

//     .
//     It contains at least one digit.
//     It contains at least one lowercase English character.
//     It contains at least one uppercase English character.
//     It contains at least one special character. The special characters are: !@#$%^&*()-+

// She typed a random string of length

// in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

// Note: Here's the set of types of characters in a form you can paste in your solution:

// numbers = "0123456789"
// lower_case = "abcdefghijklmnopqrstuvwxyz"
// upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// special_characters = "!@#$%^&*()-+"

// Example

// This password is 5 characters long and is missing an uppercase and a special character. The minimum number of characters to add is

// .

// This password is 5 characters long and has at least one of each character type. The minimum number of characters to add is

// .

// Function Description

// Complete the minimumNumber function in the editor below.

// minimumNumber has the following parameters:

//     int n: the length of the password
//     string password: the password to test

// Returns

//     int: the minimum number of characters to add

// Input Format

// The first line contains an integer

// , the length of the password.

// The second line contains the password string. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

// Constraints

// All characters in

//     are in [a-z], [A-Z], [0-9], or [!@#$%^&*()-+ ].

// Sample Input 0

// 3
// Ab1

// Sample Output 0

// 3

// Explanation 0

// She can make the password strong by adding

// characters, for example, $hk, turning the password into Ab1$hk which is strong.

// characters aren't enough since the length must be at least

// .

// Sample Input 1

// 11
// #HackerRank

// Sample Output 1

// 1

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    string c;
    cin >> c; 

    bool has_digit = false;
    bool has_lower = false;
    bool has_upper = false;
    bool has_special = false;

    string special_characters = "!@#$%^&*()-+";

    for (char ch : c) {
        if (isdigit(ch)) {
            has_digit = true;
        } else if (islower(ch)) {
            has_lower = true;
        } else if (isupper(ch)) {
            has_upper = true;
        } else if (special_characters.find(ch) != string::npos) {
            has_special = true;
        }
    }

    int missing_types = 0;
    if (!has_digit) missing_types++;
    if (!has_lower) missing_types++;
    if (!has_upper) missing_types++;
    if (!has_special) missing_types++;

    int length_needed = max(0, 6 - n);

    int result = max(missing_types, length_needed);

    cout << result << endl; 
    return 0;
}

