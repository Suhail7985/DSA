//1 encapsulation
//binding together data & function
// it is define as binding together the data members and function
//we cannot access any data or function directly from the the class
//this will increase security of data
//this will also help in modification of aur data member

#include<iostream>
using namespace std;
class encap
{
    private:
    int sal;

    //access modifier to hide the data
    public:
    encap(int val){
        sal=val;

    }
    //getter method to access the private value
    int getSal(){
        return sal;
    }

    //setter method to udate the private value
    void setSal(int ammo){
        sal=ammo;
    }

};
int main(){
    encap employee(5000);
    cout<<"intitial salary : "<<employee.getSal()<<endl;

    employee.setSal(6000);
    cout<<"final salary : "<<employee.getSal()<<endl;
}