class Solution {
public:
    int firstOccurence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans = min(ans, mid);
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (ans != INT_MAX) {
            return ans;
        }
        return -1;
    }

    int lastOccurence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = INT_MIN;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans = max(ans, mid);
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (ans != INT_MIN) {
            return ans;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int fo = firstOccurence(nums, target);
        if (fo == -1)
            return {-1, -1};
        int lo = lastOccurence(nums, target);
        return {fo, lo};
    }
};
