class Solution {
public:
    bool isSubset(map<char, int> temp, map<char, int> frequency2) {
        for (int i = 0; i < 26; i++) {
            if (temp[i]<frequency2[i]) {
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        map<char,int> frequency2; // for storing maximum freq of words2

        // Step 1: Build the `frequency2` array
        for (string& word : words2) {
            map<char,int> temp; // for storing frequency of char of each word of words2
            for (char& ch : word) {
                temp[ch - 'a']++;
                frequency2[ch - 'a'] = max(frequency2[ch - 'a'], temp[ch - 'a']);
            }
        }
        // Step 2: Check each word in words1 against the `frequency2` array
        for (string& word : words1) {
            map<char,int> temp; // Frequency array for the current word in words1
            for (char& ch : word) {
                temp[ch - 'a']++;
            }
            if (isSubset(temp, frequency2)) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};