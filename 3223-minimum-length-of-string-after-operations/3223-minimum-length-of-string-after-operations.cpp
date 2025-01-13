class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= 3) {
                if (freq[i] % 2 == 1)
                    freq[i] = 1;
                else
                    freq[i] = 2;
            }
            count += freq[i];
        }
        return count;
    }
};