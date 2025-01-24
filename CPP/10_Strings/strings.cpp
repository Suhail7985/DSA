#include<iostream>
using namespace std;

int getlen(char arr[]){
    int count=0;
    for (int i = 0; i < arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main()
{
    // char str[]={'H','E','L','L','O'};
    // char str1[]=("HELLO");

    // char str2[100];
    // cout<<"Enter something: "<<endl;
    // cin>>str2;

    // cin.get(str2,100);
    // cin.getline(str2,100);

    // string str;
    // cout<<"Enter something: "<<endl;
    // getline(cin,str);
    // cout <<str;




    //lenghth
    char arr[]={'h','e','l','l','o'};
    
    int len=getlen(arr);
    cout<<len;
}