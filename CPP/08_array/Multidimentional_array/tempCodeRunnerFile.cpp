cout<<"Enter the number of rows and columns in the matrix: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"enter element:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }