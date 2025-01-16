class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        // simple bro
        //(a^b)^(b^a)=a^b^b^a=0
        // so if any elements is in even time then it results 0 and if odd
        // elements so we xor only 1 time for final result.

        int n = nums1.size();
        int m = nums2.size();
        int result = 0;
        if (n % 2 == 1) {
            for (int i = 0; i < m; i++) {
                result ^= nums2[i];
            }
        }
        if (m % 2 == 1) {
            for (int i = 0; i < n; i++) {
                result ^= nums1[i];
            }
        }
        return result;
    }
};