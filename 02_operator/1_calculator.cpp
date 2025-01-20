#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char operation;
    cout << "Enter your first no. : ";
    cin >> a;
    cout << "Enter your second no. : ";
    cin >> b;
    cout << "Select Operation : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cin >> operation;
    if (operation=='1')
    {
        cout << "Result : "<< a+b <<endl;

    }
    else if (operation=='2'){
        cout << "Result : "<< a-b <<endl;

    }
    else if (operation=='3'){
        cout << "Result : "<< a*b <<endl;
    }

    else if (operation=='4'){
        if (b!=0)
        {
            cout << "Result : "<< a/b <<endl;
        }
        else{
            cout << "Error " <<endl;
        }
    }
    else{
        cout << "Invalid operation " <<endl;
    }


}