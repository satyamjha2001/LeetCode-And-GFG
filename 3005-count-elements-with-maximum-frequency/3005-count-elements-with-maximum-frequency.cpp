class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> fre(101, 0);
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            fre[nums[i]]++;
             if(max<fre[nums[i]])
            {
                max=fre[nums[i]];
            }
        }
        int total=0;
        for(int i=0;i<fre.size();i++)
        {
            if(fre[i]==max)
            {
                total+=fre[i];
            }
        }
        return total;
    }
};