class Solution:
    def transpose(self, mat):
        # code here
        rows = len(mat)
        cols = len(mat[0])
        
        for row in range(rows-1):
            for col in range(row+1, cols):
                mat[row][col], mat[col][row] = mat[col][row], mat[row][col]
            
        return mat
        