class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start=0,end=arr.size()-1;
        int mid,ans=arr.size();
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(k<=(arr[mid]-mid-1))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans+k;
    }
};