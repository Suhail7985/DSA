#include <bits/stdc++.h>
using namespace std;

int countPossibleOriginals(const string& word)
{
    int total = 1;                 

    for (size_t i = 1; i < word.size();i++ )
    {
        if ( word[i] == word[i-1]){
            total++;
        }
    }
    return total;
}

/* ---------------- quick demo ---------------- */
int main()
{
    cout << countPossibleOriginals("abbcccc") << '\n';  // 5
    cout << countPossibleOriginals("abcd")     << '\n'; // 1
    cout << countPossibleOriginals("aaaa")     << '\n'; // 4
    return 0;
}
