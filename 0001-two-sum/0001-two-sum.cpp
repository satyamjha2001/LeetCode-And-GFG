class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),a,b;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                     a=i;
                     b=j;
                     break;
                }
            }
        }
        vector<int> ans(2);
        ans[0]=a;
        ans[1]=b;
        return ans;
    }
};