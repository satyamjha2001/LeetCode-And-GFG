// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i =0; i<n; i++)
        {
            if(mat[i][0]<=x && x<=mat[i][m-1])
            {
                int start = 0, end = m-1, mid;
                
                while(start<=end)
                {
                    mid=start + (end-start)/2;
                    
                    if(mat[i][mid] == x)
                    {
                        return 1;
                    }
                    
                    else if(mat[i][mid] <= x)
                    {
                        start = mid+1;
                    }
                    
                    else
                    {
                        end = mid-1;    
                    }
                }
            }
        }
        
        return 0;
    }
};