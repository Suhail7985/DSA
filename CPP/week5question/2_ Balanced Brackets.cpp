// Balanced Brackets
#include <iostream>
#include <stack>
#include <string>

using namespace std;

string isBalanced(string s) {
    stack<char> bracketStack; // Stack to hold opening brackets

    for (char c : s) {
        // If it's an opening bracket, push it onto the stack
        if (c == '(' || c == '{' || c == '[') {
            bracketStack.push(c);
        } 
        // If it's a closing bracket
        else if (c == ')' || c == '}' || c == ']') {
            // Check if the stack is empty or the top doesn't match
            if (bracketStack.empty()) {
                return "NO"; // Not balanced
            }
            char top = bracketStack.top();
            // Check for matching pairs
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) {
                return "NO"; // Not balanced
            }
            bracketStack.pop(); // Pop the matching opening bracket
        }
    }

    // If the stack is empty, all brackets were matched
    return bracketStack.empty() ? "YES" : "NO";
}

int main() {
    int n;
    cin >> n; // Read the number of strings
    cin.ignore(); // Ignore the newline character after the integer input

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s); // Read each string of brackets
        cout << isBalanced(s) << endl; // Output the result for each string
    }

    return 0;
}
