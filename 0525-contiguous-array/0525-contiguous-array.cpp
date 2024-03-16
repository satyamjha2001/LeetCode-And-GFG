class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        const int n = nums.size();
        int maxLen = 0;
        int count = (nums[0] == 0) ? -1 : +1;
        
        vector<int> u(2 * n + 1, -2);

        u[count + n] = 0;
        for (int i = 1; i < n; i++) {
            count += (nums[i] == 1) ? 1 : -1;
            if (count == 0)
                maxLen = max(maxLen, i - 0 + 1);
            if (u[count + n] != -2)
                maxLen = max(maxLen, i - u[count + n]);
            else
                u[count + n] = i;
        }
        return maxLen;
    }
};