#include<iostream>
// using namespace std;
// void reachdest(int s, int e){
// //base case
// if (s==e){
//     cout<<"Destination reached";<<endl;
//     return;
// }
// s++;
// reachdest(s,e);
// }
// int main()
// {

// }

#include<iostream>
using namespace std;
int rec(int n){
if(n==0){
return 1;
}
else{
return n*rec(n-1);
}

}

int main()
{
rec(4);
cout<<rec(4)<<endl;

}
