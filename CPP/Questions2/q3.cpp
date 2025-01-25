//  Problem statement

// You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.

// For example:

//  If the given string is: STR = "abcde". You have to print the string "edcba".

// follow up:

// Try to solve the problem in O(1) space complexity. 

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:

// 1 ≤ T ≤ 10
// 1 ≤ |STR| ≤ 10 ^ 5 

// Where |STR| is the length of the string STR.

// Time limit: 1 sec.

// Sample Input 1:

// 3
// abcde
// coding
// hello1

// Sample Output 1:

// edcba
// gnidoc
// 1olleh

// Explanation of the Sample Input 1:

// For the first test case, STR = "abcde". We need to reverse the string, that is the first element becomes the last element and the last element becomes the first element, the second element becomes the second last element and the second last element becomes the second element and so on. So we get, "edcba".

// Sample Input 2:

// 3
// a
// 1det@Z
// $1xYuP

// Sample Output 2

// a
// Z@ted1
// PuYx1$

#include <iostream>
#include <string>
#include <vector>

void reverseString(std::string &s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Swap characters
        std::swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    int T;
    std::cin >> T; // Read number of test cases
    std::cin.ignore(); // Ignore the newline character after the integer input

    std::vector<std::string> results;

    for (int i = 0; i < T; i++) {
        std::string STR;
        std::getline(std::cin, STR); // Read the string
        reverseString(STR); // Reverse the string in place
        results.push_back(STR); // Store the result
    }

    // Print all results
    for (const auto &result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}



