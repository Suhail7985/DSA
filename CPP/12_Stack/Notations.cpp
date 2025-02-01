//prefix
#include <iostream>
#include <stack>

using namespace std;

    void prefix(string s){
        stack<string> st;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                string op1=st.top();
                st.pop();
                string op2=st.top();
                st.pop();
                string temp= s[i]+op1+op2;
                st.push(temp);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout<<st.top();
    }

    void postfix(string s){
        stack<string> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                string op1=st.top();
                st.pop();
                string op2=st.top();
                st.pop();
                string temp= op1+op2+s[i];
                st.push(temp);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout<<st.top();
    }

    int main(){
        string s="-+a/*bc^de";
        prefix(s);
        cout<<endl;
        postfix(s);
       

    }   