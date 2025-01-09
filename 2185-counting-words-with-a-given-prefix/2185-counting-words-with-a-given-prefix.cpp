class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        //using for each loop and find function
        for(string word: words)
        {
            if(word.find(pref)==0)
            count++;
        }
        return count;
    }
};