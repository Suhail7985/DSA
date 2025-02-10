// 3174. Clear Digits
// Easy
// Topics
// Companies
// Hint

// You are given a string s.

// Your task is to remove all digits by doing this operation repeatedly:

//     Delete the first digit and the closest non-digit character to its left.

// Return the resulting string after removing all digits.

#include<iostream>
#include<string>
using namespace std;
string clearDigits(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                a.pop_back();
            }
            else{
                a.push_back(s[i]);
            }
        }
        return a;
    }
int main(){
    string s="a2v4";
    cout << clearDigits(s) << endl;
    
}