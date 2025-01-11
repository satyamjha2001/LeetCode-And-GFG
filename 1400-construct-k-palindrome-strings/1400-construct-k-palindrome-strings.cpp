class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k)
            return false;
        int oddFreqCount=0;
        vector<int> freq(26,0);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]%2==1)
                oddFreqCount++;
        }
        return oddFreqCount<=k;
    }
};