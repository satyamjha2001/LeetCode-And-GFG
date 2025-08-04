class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < cols; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < rows; i++) {
            // reverse(matrix[i].begin(), matrix[i].end());

            int start = 0, end = cols - 1;
            while (start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};