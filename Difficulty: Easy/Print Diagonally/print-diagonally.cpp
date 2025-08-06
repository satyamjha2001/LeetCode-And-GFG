class Solution {

  public:
    vector<int> downwardDiagonal(int N, vector<vector<int>> A) {
        // Your code goes here
        vector<int> ans;
        
        //run this loop n times
        for(int k = 0; k<N; k++)
        {
            // traversing downwards starting
            // from first row
            
            int row=0,col=k;
            while(col>=0)
            {
                ans.push_back(A[row][col]);
                row++; col--;
            }
            
        }
        
        for (int j = 1; j < N; j++) {
    
            // traversing downwards starting 
            // from last column
            int col = N - 1, row = j;
            while (row < N) {
                ans.push_back(A[row][col]);
                row++, col--;
            }
        }
        
        return ans;
    }
};