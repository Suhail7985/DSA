//class and object
#include<iostream>
using namespace std;


    class car{
        public:
        int speed;
        string color;


        int price;
    car(){
        cout<<"hello"<<endl;
    }

        // void boostup(){

        // }


};
int main(){
    car car1;
    car1.speed=100;
    car1.color="Black";
    cout<<car1.speed<<endl;
    cout<<car1.color<<endl;
    cout<<car1.price<<endl;
}
//default constructer is always call 