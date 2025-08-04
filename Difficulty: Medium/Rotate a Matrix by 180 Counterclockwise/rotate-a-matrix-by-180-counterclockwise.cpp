class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int rows = mat.size();
        int cols = mat[0].size();
        
        // Step 1: Reverse each row
        for (int i = 0; i < rows; i++)
        {
            // reverse(mat[i].begin(), mat[i].end());
    
            int start = 0, end = cols-1;
            while (start < end)
            {
                swap(mat[i][start], mat[i][end]);
                start++;
                end--;
            }
        }
        // Step 2: Reverse each column
        for (int j = 0; j < cols; j++)
        {
            int start = 0, end = rows - 1;
            while (start < end)
            {
                swap(mat[start][j], mat[end][j]);
                start++;
                end--;
            }
        }
    }
};