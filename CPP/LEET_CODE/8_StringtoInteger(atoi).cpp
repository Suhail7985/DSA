//String to Integer (atoi)
#include<iostream>
#include<string>
using namespace std;
int myAtoi(string s){
    int sign = 1, res = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            continue;
            }
            if(s[i] == '-'){
                sign = -1;
                i++;
                }
                if(s[i] == '+'){
                    sign = 1;
                    i++;
                    }
                    if(s[i] < '0' || s[i] > '9'){
                        return 0;
                        }
                        res = res * 10 + (s[i] - '0');
                        }
                        return sign * res;

                }

int main(){
    string s = "   -42";
    cout << myAtoi(s) << endl;
    
}
