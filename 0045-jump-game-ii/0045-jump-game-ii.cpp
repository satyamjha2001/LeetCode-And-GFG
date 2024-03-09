class Solution {
public:
    int jump(vector<int>& nums) {
        int farthest=0,end=0,jump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(farthest<i+nums[i])
                farthest=i+nums[i];
            if(i==end)
            {
                jump++;
                end=farthest;
            }
        }
        return jump;
    }
};