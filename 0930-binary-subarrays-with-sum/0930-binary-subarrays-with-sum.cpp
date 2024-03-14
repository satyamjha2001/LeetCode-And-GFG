class Solution {
public:
     int numSubarraysWithSumAtMostK(vector<int>& nums, int goal) {
        int start=0, sum=0, count=0, n=nums.size();
        for(int end=0;end<n;end++)
        {
            //exp
            sum+=nums[end];
            //shrinking
            while(start<=end && sum>goal)
            {
                sum-=nums[start];
                start++;
            }
            count+=end-start+1;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return numSubarraysWithSumAtMostK(nums, goal)-numSubarraysWithSumAtMostK(nums, goal-1);
    }
};