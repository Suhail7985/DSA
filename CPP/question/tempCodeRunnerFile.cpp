 int n;
    int arr[n];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];