//check_if_one_string_swap_can_make_string_equal
#include <bits/stdc++.h>
using namespace std;
bool areAlmostEqual(string s1, string s2)
{
    if (s1 == s2)
    {
        return true;
    }
    if (s1.size() != s2.size()) {
        return false;
    }
    vector<int> diff;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) {
            diff.push_back(i);
        }
    }
    if(diff.size()==2 && s1[diff[0]]==s2[diff[1]] && s1[diff[1]]==s2[diff[0]]){
        
        return true;
    }
    return false;
}

int main()
{
    string s1 = "bank";
    string s2 = "kanb";
    cout << areAlmostEqual(s1, s2) << endl;
    return 0;
}