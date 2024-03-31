class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minI=-1;
        int maxI=-1;
        long long ans=0;
        int leftBoundary=-1;
        int n=nums.size();
        for(int current=0;current<n;current++)
        {
            if(nums[current]==minK)
            {
                minI = current;
            }
            if(nums[current]==maxK)
            {
                maxI = current;

            }
            // check if elements is out of bound
            if(nums[current]<minK || nums[current]>maxK)
            {
                leftBoundary= current;
            }
            if(minI!=-1 && maxI!=-1)
            {
                int smaller = minI<maxI?minI:maxI;
                if((smaller-leftBoundary)>0)
                {
                    ans+= (smaller-leftBoundary);
                }
            }
        }
            return ans;
        
    }
};