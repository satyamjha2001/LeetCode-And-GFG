class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(), water=0,maxHeight=0,index=-1,leftMax=0,rightMax=0;

        //find maximum height
        for(int i=0;i<n;i++)
        {
            if(maxHeight<height[i])
            {
                index=i;
                maxHeight=height[i];
            }
        }

        //now traverse in left part of max height
        for(int i=1;i<index;i++) //0th index not store water
        {
            leftMax=max(leftMax,height[i-1]);
            if(leftMax-height[i]>0)
            {
                water+=leftMax-height[i];
            }
        }

        //now traverse in right part of max height
        for(int i=n-2;i>index;i--) //n-1 index not store water
        {
            rightMax=max(rightMax,height[i+1]);
            if(rightMax-height[i]>0)
            {
                water+=rightMax-height[i];
            }
        }
        return water;
    }
};