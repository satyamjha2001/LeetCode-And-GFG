class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int num = 1;

        while (top <= bottom && left <= right) {
            // fill top row
            for (int i = left; i <= right; i++)
                matrix[top][i] = num++;
            top++;

            // fill right column
            for (int i = top; i <= bottom; i++)
                matrix[i][right] = num++;
            right--;

            // fill bottom row
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    matrix[bottom][i] = num++;
                bottom--;
            }

            // fill left column
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    matrix[i][left] = num++;
                left++;
            }
        }

        return matrix;
    }
};
