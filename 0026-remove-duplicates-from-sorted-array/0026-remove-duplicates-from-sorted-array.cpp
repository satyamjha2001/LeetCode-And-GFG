class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i,j=0;
        for(i = 1; i<n;i++)
        {
            if(nums[j] != nums[i])
            {
                j++;
                nums[j]=nums[i];
            }

        }

        return j+1;
    }
};