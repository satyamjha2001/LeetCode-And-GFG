class Solution {
public:
    int nCr(int n, int r) {
        if (r == 0 || r == n)
            return 1;
        int res = 1;
        for (int i = 0; i < r; ++i) {
            res = res * (n - i) / (i + 1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                arr[i].push_back(nCr(i, j));
            }
        }

        return arr;
    }
};