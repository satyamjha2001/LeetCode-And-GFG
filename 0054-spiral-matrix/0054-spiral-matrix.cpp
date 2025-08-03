class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        int top = 0, right = cols - 1, bottom = rows - 1, left = 0;
        cout << "Spiral matrix is" << endl;
        vector<int> ans;
        while (top <= bottom && left <= right) {
            // print top row
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;
            // print right column
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;
            // print bottom row reversed
            if (top <= bottom) // because when we came in while loop top is
                               // increase so we have to check here also
            {
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[bottom][j]);
                bottom--;
            }
            // print left col reversed
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};