class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)
            return n;
        int sum=(n*(n+1))/2;
        int pivotsum;
        for(int i=1;i<=n;i++)
        {   pivotsum=(i*(i+1))/2;
            if((pivotsum-i)==(sum-pivotsum))
                return i;
        }
        return -1;
    }
};