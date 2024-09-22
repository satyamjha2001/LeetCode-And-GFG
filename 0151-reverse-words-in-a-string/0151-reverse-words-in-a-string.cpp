class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Trim leading/trailing spaces and reduce multiple spaces
        int n = s.length();
        int i = 0, j = 0;

        // Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // Step 2: Move valid characters to the front, ignoring extra spaces
        while (i < n) {
            // Append the current word
            while (i < n && s[i] != ' ')
                s[j++] = s[i++];

            // Skip spaces between words, but leave only one space
            while (i < n && s[i] == ' ')
                i++;

            // If there are still words left, add a single space
            if (i < n)
                s[j++] = ' ';
        }

        // Resize the string to remove trailing spaces
        s.resize(j);

        // Step 3: Reverse the entire string
        reverse(s.begin(), s.end());

        // Step 4: Reverse each word in the reversed string
        int start = 0;
        for (int end = 0; end <= s.length(); end++) {
            if (end == s.length() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1; // Move start to the beginning of the next word
            }
        }
        return s;
    }
};