
//Short Palindrome
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

int shortPalindrome(string s) {
    int n = s.length();
    
    // A vector to store the frequency of pairs of characters
    unordered_map<char, vector<int>> freq;

    long long count = 0;

    // We iterate over all possible (i, l) pairs, where i < l
    for (int i = 0; i < n; ++i) {
        for (int l = i + 1; l < n; ++l) {
            if (s[i] == s[l]) {
                // Now we check for all (j, k) pairs where i < j < k < l
                // We can count valid pairs (j, k) where j < k and s[j] == s[k]
                for (int j = i + 1; j < l; ++j) {
                    for (int k = j + 1; k < l; ++k) {
                        if (s[j] == s[k]) {
                            count += 1;
                        }
                    }
                }
            }
        }
    }

    return count % MOD;
}

int main() {
    string s;
    cin >> s;

    int result = shortPalindrome(s);
    cout << result << endl;

    return 0;
}
