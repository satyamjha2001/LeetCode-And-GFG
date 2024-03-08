class Solution {
public:
    void reverse(vector<int>& a,int start,int end)
    {   int temp;
        while(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        k %= n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};