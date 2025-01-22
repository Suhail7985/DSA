
#include<iostream>
using namespace std;
void printSpriral(int arr[4][4],int row ,int col){
    int topRow = 0;
    int bottomRow=row-1;
    int lefCol=0;
    int rightCol=col-1;
    while(topRow<=bottomRow && lefCol<=rightCol){
        //print top row
        for(int i=lefCol;i<=rightCol;i++){
            cout<<arr[topRow][i]<<" ";
        }
        topRow++;
        //print right col
        for(int i=topRow;i<=bottomRow;i++){
            cout<<arr[i][rightCol]<<" ";
        }
        rightCol--;
        //print bottom row
        for(int i=rightCol;i>=lefCol;i--){
            cout<<arr[bottomRow][i]<<" ";
        }
        bottomRow--;
        //print left col
        for(int i=bottomRow;i>=topRow;i--)
        {
            cout<<arr[i][lefCol]<<" ";
        }
        lefCol++;
    }
}
int main()
{
    const int row=4;
    const int col=4;
    int arr[row][col];
   
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"spiral order : "<<endl;
    printSpriral(arr,row,col);
   
}



