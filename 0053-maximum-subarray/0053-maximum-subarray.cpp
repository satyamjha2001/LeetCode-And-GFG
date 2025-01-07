class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kdane's Algorithm
        int n=nums.size();
        int maxSubArray=INT_MIN;
        int prefix=0;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
            maxSubArray=max(maxSubArray,prefix);
            if(prefix<0)
                prefix=0;
        }
        return maxSubArray;
    }
};