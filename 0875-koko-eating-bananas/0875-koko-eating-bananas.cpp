class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start, end = piles[0], ans;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += piles[i];
            end = max(end, piles[i]);
        }
        start = sum / h;
        if (start == 0) {
            start = 1;
        }
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int total_time = 0;

            for (int i = 0; i < n; i++) {
                total_time += piles[i] / mid;
                if (piles[i] % mid) {
                    total_time++;
                }
            }
            if (total_time <= h) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};