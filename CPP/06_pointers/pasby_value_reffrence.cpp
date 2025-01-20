#include<iostream>
using namespace std;


    // void test(int num){   //making dublicate changes are made in duplicate vale
    void test(int &num) { //not making a duplicate value all the changes in original one
        ++num;
        cout<<"num value in test : "<<num<<endl;
    }
    int main(){
        int num;
        cin >>num;
        test(num);
        cout<<"Final output  : "<<num<<endl; 
    }
