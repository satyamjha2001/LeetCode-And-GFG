class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n)
            return -1;
        int start=0, end=0, count, ans,num;
        for(int i=0;i<n;i++)
        {
            start=max(start, nums[i]);
            end+=nums[i];
        }
        int mid;
        while(start<=end)
        {
            mid= start+(end-start)/2;
            count=1;
            num=0;
            for(int i=0;i<n;i++)
            {
                num+=nums[i];
                if(num>mid)
                {
                    count++;
                    num=nums[i];
                }
            }

            if(count<=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};