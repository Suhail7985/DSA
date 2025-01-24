#include<iostream>
using namespace std;
int fib(){
    int n;
    cin >> n;
    int a = 0, b = 1, nex;
    for(int i=0;i<n;i++){
        cout << a << " ";
        nex = a + b;
        a = b;
        b=nex;

    }

  

}
int main()
{
  int n;
  fib();
}