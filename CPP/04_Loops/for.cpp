//nested loop ----

#include<iostream>
using namespace std;
int main()
{
    // int n;
    // int sum=0;
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         if (j==2){
    //             continue;
    //         }
    //         cout<< "i "<<i<<" ,"<<"j "<<j<<endl;
    //     }
    // }

    int n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=7;j++)
        {
            if(j%2 !=0){
                continue;
            }
            cout<<"i : "<<i <<"   j : "<<j<<endl;
    }
}
}