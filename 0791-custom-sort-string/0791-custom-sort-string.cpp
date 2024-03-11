class Solution {
public:
    string customSortString(string order, string s) {
         int count[26] = {0}; // Assuming lowercase letters only

        // Count occurrences of characters in s
        for (int i = 0; i < s.size(); ++i) {
            count[s[i] - 'a']++;
        }

        string result;

        // Add characters in order according to order string
        for (int i = 0; i < order.size(); ++i) {
            int index = order[i] - 'a';
            while (count[index]-- > 0) {
                result.push_back(order[i]);
            }
        }

        // Add remaining characters in s that are not in order
        for (int i = 0; i < s.size(); ++i) {
            if (order.find(s[i]) == string::npos) {
                result.push_back(s[i]);
            }
        }

        return result;
    }
};