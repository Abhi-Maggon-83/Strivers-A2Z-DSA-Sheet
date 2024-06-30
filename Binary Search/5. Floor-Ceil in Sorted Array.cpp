int getFloor(vector<int>&a,int n, int x){
	int low = 0, high = n-1, last = -1;

	while(low <= high){
		int mid = low + (high - low)/2;
		if(a[mid] <= x){
			last = a[mid];
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	return last;
}

int getCeil(vector<int>&a,int n, int x){
	int low = 0, high = n-1, last = -1;

	while(low <= high){
		int mid = low + (high - low)/2;

		if(a[mid] >= x){
			last = a[mid];
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return last;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int> ans;
	ans.first = getFloor(a,n,x);
	ans.second = getCeil(a,n,x);
	return ans;
}
