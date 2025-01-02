class Solution {
public:
    int lowerBound(vector<int>& nums, int x) {
        int n = nums.size();
        int index = n;
        int start = 0, end = n - 1, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] >= x) {
                index = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return index;
    }
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        // sort the array
        sort(nums.begin(), nums.end());
        int start = 0, end = n, mid;
        while (start <= end) { 
            mid = start + (end - start) / 2;
            // now we implement binary search and find first >= element index
            int index = lowerBound(nums, mid);
            int count = n - index;
            if (mid == count)
                return mid;
            else if (mid < count) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};