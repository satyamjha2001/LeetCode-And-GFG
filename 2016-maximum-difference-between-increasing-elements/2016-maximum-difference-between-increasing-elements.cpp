class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxSoFar = INT_MIN;
        int maxDiff = -1;
        vector<int> suffixMax(n);
        for (int i = n - 1; i >= 0; i--) {
            maxSoFar = max(maxSoFar, nums[i]);
            suffixMax[i] = maxSoFar;
        }

        for (int i = 0; i < n - 1; i++) {
            if ((suffixMax[i + 1] > nums[i]) &&
                (maxDiff < suffixMax[i + 1] - nums[i]))
                maxDiff = suffixMax[i + 1] - nums[i];
        }
        return maxDiff;
    }
};