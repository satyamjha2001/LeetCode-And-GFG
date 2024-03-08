class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        int temp=x,ans=0;
        while(temp>0)
        {
            if(ans>INT_MAX/10)
                return 0;
            ans=10*ans+(temp%10);
            temp=temp/10;
        }
        if(ans==x)
            return 1;
        else
            return 0;
    }
};