#include<iostream>
using namespace std;
int main()
{
    // int age =15;
    // if (age>18){
    //     cout << "You can vote"<<endl;

    // }
    // if (age >10){
    //     cout << "You can drive"<<endl;
    // }
    // else{
    //     cout << "You cannot vote"<<endl;
    // }

    //-----------Ternary
    //condition ? statement 1 : statement 2
    int num;
    cout<<"Enter a number : ";
    cin >> num;
    string ans= num >0 ? "Positive" : "Negative";
    cout << ans << endl;
    
    //ternary  
    string an= (num==0) ? "zero" : (num > 0)? "Positive" : "Negative";
    cout << an ;

}