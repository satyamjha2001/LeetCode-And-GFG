class Solution {
public:
    vector<int> findDuplicates(vector<int> & nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) 
        {
            nums[abs(nums[i]) - 1] = -1 * nums[abs(nums[i]) - 1];
            if (nums[abs(nums[i]) - 1] > 0)
                v.push_back(abs(nums[i]));
        }
        return v;
    }
};