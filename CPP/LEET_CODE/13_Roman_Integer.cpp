#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    // Mapping of Roman numerals to integer values
    unordered_map<char, int> roman_map = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        // If current numeral is smaller than the next one, subtract it
        if (i < n - 1 && roman_map[s[i]] < roman_map[s[i + 1]]) {
            total -= roman_map[s[i]];
        } else {
            total += roman_map[s[i]];
        }
    }

    return total;
}

int main() {
    // Test cases
    cout << romanToInt("III") << endl;      // Output: 3
    cout << romanToInt("LVIII") << endl;    // Output: 58
    cout << romanToInt("MCMXCIV") << endl;  // Output: 1994
    return 0;
}
