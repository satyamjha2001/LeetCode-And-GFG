class Solution {
public:
    int mySqrt(int x) {
        int n=1,ans=0;
        if(x<0)
            return 0;
        while(n<=x/n)
        {
            ans=n;
            n++;
        }
        return ans;
    }
};