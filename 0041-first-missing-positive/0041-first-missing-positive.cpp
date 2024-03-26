class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int chair;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 1 && nums[i] <= n) {
                chair = nums[i] - 1;
                if (nums[chair] != nums[i]) {
                    swap(nums[chair], nums[i]);
                    i--;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (i + 1 != nums[i])
                return i + 1;
        }
        return n + 1;
    }
};