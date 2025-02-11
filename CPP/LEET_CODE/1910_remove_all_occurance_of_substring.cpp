//remove all occurance of substring
#include<iostream>
#include<string>
using namespace std;
string removeOccurance(string s,string part){
    int pos = s.find(part);
    while(pos != string::npos){
        s.erase(pos,part.length());
        pos = s.find(part);
        }
        return s;
        }
int main(){
    string s = "Hello, World! Hello, C++";
    string part = "Hello, ";
    cout<<removeOccurance(s,part)<<endl;
    
}