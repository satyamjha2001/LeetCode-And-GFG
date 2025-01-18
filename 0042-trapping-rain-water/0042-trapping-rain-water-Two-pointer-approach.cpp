class Solution {
public:
    int trap(vector<int>& height) {
        // two pointer - 1 pass
        int n = height.size(), totalWater = 0; // Initialize total water trapped
        int start = 0, end = n - 1; // Two pointers, left (l) and right (r)
        int leftMax = 0, rightMax = 0; // Initialize max heights for left and right
        while (start < end) {
            if (height[start] <= height[end]) {
                // If left height is less than or equal to right height
                if (height[start] < leftMax) {
                    totalWater += leftMax - height[start]; // Water trapped on the left
                } else {
                    leftMax = height[start]; // Update left max height
                }
                start++; // Move left pointer
            } else {
                // If right height is less than left height
                if (height[end] < rightMax) {
                    totalWater += rightMax - height[end]; // Water trapped on the right
                } else {
                    rightMax = height[end]; // Update right max height
                }
                end--; // Move right pointer
            }
        }

        return totalWater; // Return total water trapped
    }
};