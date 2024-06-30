class Solution{
  public:

    int findFloor(vector<long long> v, long long n, long long x){
        
        int ans = -1;
        int res = 0;
        int low = 0;
        int high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(v[mid] <= x){
                if(v[mid] > res){
                    res = v[mid];
                    ans = mid;
                }
                low = mid + 1;
            }else if(v[mid] > x){
                high = mid - 1;
            }
        }
        
        return ans;
        
    }
};
