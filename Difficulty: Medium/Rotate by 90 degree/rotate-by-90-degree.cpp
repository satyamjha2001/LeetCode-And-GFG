class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int rows = mat.size();
        int cols = mat[0].size();
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = i + 1; j < cols; j++)
            {
                swap(mat[i][j], mat[j][i]);
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
