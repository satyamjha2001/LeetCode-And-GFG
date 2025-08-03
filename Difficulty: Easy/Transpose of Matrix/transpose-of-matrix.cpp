class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int rows = mat.size();
        int cols = mat[0].size();

        for(int row=0;row<rows-1;row++)
        {
            for(int col=row+1;col<cols;col++)
            {
                swap(mat[row][col],mat[col][row]);
            }
        }
        return mat;
    }
};