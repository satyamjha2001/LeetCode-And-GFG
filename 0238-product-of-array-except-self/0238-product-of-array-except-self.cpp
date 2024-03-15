class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(),1);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]*nums[i];
            cout<<prefix[i]<<endl;
        }
        int back=1;
        vector<int> ans(nums.size(),0);
        for(int i=nums.size()-1;i>0;i--)
        {   
            cout<<prefix[i-1]<<" "<<back<<endl;
            ans[i]=prefix[i-1]*back;
            back*=nums[i];
            cout<<ans[i]<<endl;
        }
        ans[0]=back;
        return ans;
    }
};