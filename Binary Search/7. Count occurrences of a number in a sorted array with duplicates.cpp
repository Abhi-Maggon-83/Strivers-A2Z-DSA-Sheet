class Solution{
public:	
		
	int firstOccurence(int arr[], int n, int x){
	    int low = 0, high = n -1;
	    int ans= -1;
	    while(low <= high){
	        int mid = low + (high - low)/2;
	        
	        if(arr[mid] == x){
	            ans = mid;
	            high = mid - 1;
	        }else if(arr[mid] > x){
	            high = mid - 1;
	        }else{
	            low = mid + 1;
	        }
	    }
	    
	    return ans;
	}
	
	int lastOccurence(int arr[], int n, int x){
	    int low = 0, high = n -1;
	    int ans= -1;
	    while(low <= high){
	        int mid = low + (high - low)/2;
	        if(arr[mid] == x){
	            ans = mid;
	            low = mid + 1;
	        }else if(arr[mid] > x){
	            high = mid - 1;
	        }else{
	            low = mid + 1;
	        }
	    }
	    
	    return ans;
	}
	
	int count(int arr[], int n, int x) {
	    int fo = firstOccurence(arr,n,x);
	    if(fo == -1){
	        return 0;
	    }
	    int lo = lastOccurence(arr,n,x);
	    
	    return lo - fo + 1;
	}
};
