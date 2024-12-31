class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1, mid;

        while (start < end) {
            mid = start + (end - start) / 2; // safer mid calculation

            // Check if mid is a peak element
            if (nums[mid] > nums[mid + 1]) {
                // Peak is in the left half (or mid itself is a peak)
                end = mid;
            } else {
                // Peak is in the right half
                start = mid + 1;
            }
        }

        // When start == end, we have found the peak
        return start; // or return end, both are the same
    }
};