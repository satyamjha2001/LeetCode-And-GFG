class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int length=0;
        while(i>=0)
        {
            if(s[i]==' ')
            {   if(length == 0)
                    i--;
                else
                    break;
            }
            else
            {
                length++;
                i--;
            }
        }
        return length;
    }
};