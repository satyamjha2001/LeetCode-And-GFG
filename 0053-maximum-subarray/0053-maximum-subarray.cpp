class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxSoFar = INT_MIN;
        int max_ending_here=0;
        for(int i=0;i<n;i++)
        {
          max_ending_here+=nums[i];
          if(maxSoFar < max_ending_here)
            maxSoFar = max_ending_here;
            if(max_ending_here <0)
            max_ending_here =0;
        }
            return maxSoFar;
    }
};