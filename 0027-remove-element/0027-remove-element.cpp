class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0, end = nums.size() - 1, temp;
        while (start <= end) {
            if (nums[start] == val) {
                temp = nums[start];
                nums[start] = nums[end];
                nums[end] = temp;
                end--;
            } else {
                start++;
            }
        }
        return end + 1;
    }
};