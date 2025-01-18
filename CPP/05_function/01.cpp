#include<iostream>
using namespace std;
// //parameterized function
// void hello(string name, int age){
//     cout<<"Hello my name is :"<<name<<"my age is : "<<age<<endl;

// }
// int main()
// {
//     hello("john",12);
//}


// void print(){
//     cout<<"1"<<endl;

// }
// void print(string name){
//     cout<<"2"<<endl;
// }
// int main(){
//     print();
//     print("john");
// }


//ambiguity

void print(){
    cout<<"1"<<endl;

}
void print(string name){
    cout<<"2"<<endl;
}
void print(string name){
    cout<<"3"<<endl;
}
int main(){
    print();    
}

