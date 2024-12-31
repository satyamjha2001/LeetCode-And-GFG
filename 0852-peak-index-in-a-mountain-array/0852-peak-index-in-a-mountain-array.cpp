class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start=1, end = n-2, mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid-1]>arr[mid])
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return 0;
    }
};