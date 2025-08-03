class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> result;
        bool flag=true;
        for(int row = 0; row<rows;row++)
        {
            if(flag)
            {
                for(int col=0;col<cols;col++)
                {
                    result.push_back(matrix[row][col]);          
                }
                flag=false;
            }
            
            else
            {
                for(int col=cols-1;col>=0;col--)
                {
                    result.push_back(matrix[row][col]);
                }
                flag=true;
            }
        }
        
        return result;
    }
};