class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int low=-1;
        int high=0;
        int maix=0;
        unordered_map<int,int> u;
        
        while(high<nums.size())
        {
            u[nums[high]]++;
            if(u[nums[high]]>k)
            {
                while(low<high)
                {
                    low++;
                    u[nums[low]]--;
                    if(u[nums[high]]<=k)
                        break;
                }
            }
            maix=max(maix, high-low);
            high++;
        }
        return maix;  
    }
};