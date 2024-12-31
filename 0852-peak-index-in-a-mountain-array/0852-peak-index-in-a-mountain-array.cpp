class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start=0, end = n-1, mid;
        while(start<=end)
        {
            mid=end+(start-end)/2;
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