pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int,int> ans = {INT_MIN,INT_MAX};
    sort(arr, arr+n);
    int low = 0, high = n-1;
    
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] <= x){
            ans.first = max(ans.first,arr[mid]);
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    low = 0; high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= x){
            ans.second = min(ans.second,arr[mid]);
            high = mid-1;
        }else{
            low = mid + 1;
        }
    }
    if(ans.first == INT_MIN)
    ans.first = -1;
    if(ans.second == INT_MAX)
    ans.second = -1;
    
    return ans;
}
