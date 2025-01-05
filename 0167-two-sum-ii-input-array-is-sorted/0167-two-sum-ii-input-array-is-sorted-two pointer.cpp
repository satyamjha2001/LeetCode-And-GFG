class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans(2);
        for (int i = 0; i < n - 1; i++) {
            int start = i+1, end = n - 1, mid;
            while (start <= end) {
                mid = start + (end - start) / 2;
                if (numbers[i] + numbers[mid] == target)
                {   ans[0]=i+1;
                    ans[1]=mid+1;
                    return ans;
                }
                else if (numbers[i] + numbers[mid] < target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return ans;
    }
};