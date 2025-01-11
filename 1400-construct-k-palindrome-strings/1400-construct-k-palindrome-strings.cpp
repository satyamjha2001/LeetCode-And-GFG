class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k)
            return false;
        int oddFreqCount=0;
        map<char, int> freq;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        for(auto [ch, fre] : freq)
        {
            if(fre%2==1)
                oddFreqCount++;
        }

        return oddFreqCount<=k;
    }
};