class Solution {
public:
    int getTotalHours(vector<int>& piles, int hourly)
    {
        int totalHours=0,n=piles.size();
        for(int i=0;i<n;i++)
        {
            totalHours+=ceil(double(piles[i])/double(hourly));
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(),start=0,end=0,mid,ans,totalHours;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            end=max(end, piles[i]);
            sum+=piles[i];
        }
        start=ceil(double(sum)/double(h));

        while(start<=end)
        {
            mid=start+(end-start)/2;
            totalHours=getTotalHours(piles,mid);
            if(totalHours<=h)
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