class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=0;j<nums.size()-1;j++)
        //     {
        //         if(nums[j]>nums[j+1])
        //         {
        //             int temp=nums[j];
        //             nums[j]=nums[j+1];
        //             nums[j+1]=temp;
        //         }
        //     }
        // }
        sort(nums.begin(), nums.end());
        int n=nums.size();
        return nums[n-k];
    }
};