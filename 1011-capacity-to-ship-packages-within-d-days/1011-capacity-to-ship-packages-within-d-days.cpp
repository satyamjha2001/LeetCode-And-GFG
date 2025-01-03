class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        if (days > n)
            return -1;

        int start = 0, end = 0, weight, count, ans;
        for (int i = 0; i < n; i++) {
            start = max(start, weights[i]);
            end += weights[i];
        }

        while (start <= end) {
            int mid = start + (end - start) / 2;
            weight = 0;
            count = 1;
            for (int i = 0; i < n; i++) {
                weight += weights[i];
                if (weight > mid) {
                    count++;
                    weight = weights[i];
                }
            }

            if (count <= days) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};