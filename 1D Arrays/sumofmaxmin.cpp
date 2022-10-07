int sumOfMaxMin(int arr[], int n){
    int maxi = arr[0];
    int mini = arr[0];
    
    for(int i = 0;i<n;i++){
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);
        
    }
    int sum = maxi + mini;
    return sum;
    
}