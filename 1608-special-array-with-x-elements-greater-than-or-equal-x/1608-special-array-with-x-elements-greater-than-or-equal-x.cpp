class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        //sort the array
        sort(nums.begin(), nums.end());

        for(int x=0;x<=n;x++)
        {   //now we implement binary search and find first >= element index
            int index=n,count=0;   
            int start=0, end=n-1,mid;
            while(start<=end)
            {
                mid=start+(end-start)/2;
                if(nums[mid]>=x)
                {
                    index=mid;
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            count = n-index;
            if(x==count)
                return x;
        }
        return -1;
    }
};