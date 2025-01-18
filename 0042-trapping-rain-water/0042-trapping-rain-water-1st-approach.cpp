class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(), water=0;
        vector<int> leftMax(n,0);
        vector<int> rightMax(n,0);
        for(int i=1;i<n;i++)
        {
            leftMax[i]=max(leftMax[i-1], height[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            rightMax[i]=max(rightMax[i+1], height[i+1]);
        }

        for(int i=0;i<n;i++)
        {
            if((min(rightMax[i], leftMax[i])-height[i])>0)
                water+=(min(rightMax[i], leftMax[i])-height[i]);
        }
        return water;
    }
};