class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        if (n % 2 == 1)
            return false;
        // approach 2
        // in this we don't use stack and extra space
        int openBracketCount = 0;
        int closedBracketCount = 0;
        // in this we count open bracket from L to R so we use greedy so where
        // locked =0 we assume open bracket.
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || locked[i] == '0')
                openBracketCount++;
            else if (s[i] == ')')
                openBracketCount--;
            if (openBracketCount < 0)  //if -ve we immediately return false because we can't balance.
                return false;
        }

        // in this we count close bracket from R to L so we use greedy so where
        // locked = 0 we assume close bracket.
        for (int i = 0; i < n; i++) {
            if (s[i] == ')' || locked[i] == '0')
                closedBracketCount++;
            else
                closedBracketCount--;
            if (closedBracketCount < 0) 
                return false;
        }

        return true;
    }
};